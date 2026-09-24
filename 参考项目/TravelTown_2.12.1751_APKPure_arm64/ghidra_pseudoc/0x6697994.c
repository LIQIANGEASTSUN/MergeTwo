/* Ghidra 12.1.2 native pseudocode; RVA 0x6697994; Merger.Game.Views.BoardView.PrepareItemToSlide; status ok */


long * Merger_Game_Views_BoardView__PrepareItemToSlide
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,ulong param_6)

{
  float fVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  uVar5 = param_6;
  if ((bRam0000000007e282e3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809568);
    bRam0000000007e282e3 = 1;
  }
  if (*(long *)(param_4 + 0x130) != 0) {
    uVar5 = *(ulong *)PTR_DAT_07809568;
    plVar3 = (long *)func_0x047544b8(*(long *)(param_4 + 0x130),param_5);
    puVar2 = PTR_DAT_077c0858;
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c0858) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_06797a54;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_077c0858,4);
LAB_06797a54:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_06797ab4;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar2,9);
LAB_06797ab4:
        lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar6 != 0) {
          func_0x038ee7ac(lVar6,0);
        }
      }
      lVar6 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_06797b1c;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar2,5);
LAB_06797b1c:
      uVar5 = puVar4[1];
      (*(code *)*puVar4)(plVar3,1);
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06797b78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      uVar5 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06797b78:
      lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar6 != 0) {
        func_0x06feb6b4(lVar6,param_6,1,0);
        return plVar3;
      }
    }
  }
  uVar9 = func_0x03280cac();
  puVar2 = PTR_DAT_0777dd88;
  if ((bRam0000000007e282dd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777dd88);
    bRam0000000007e282dd = 1;
  }
  plVar3 = (long *)func_0x038d903c(uVar9,param_2,param_3,extraout_x1,0,0);
  uVar9 = *(undefined8 *)puVar2;
  if ((plVar3 != (long *)0x0) && ((char)plVar3[0x1d] != '\0')) {
    *(int *)((long)plVar3 + 0xb4) = (int)uVar5;
    uVar5 = func_0x03919230(uVar5 & 0xffffffff,0,uVar9);
    if ((uVar5 & 1) != 0) {
      fVar1 = -2.1474836e+09;
      if (*(float *)(plVar3 + 0x18) != INFINITY) {
        fVar1 = (float)(int)*(float *)(plVar3 + 0x18);
      }
      *(float *)(plVar3 + 0x18) = fVar1;
    }
    plVar3[0x17] = 0;
    func_0x032809c4(plVar3 + 0x17,0);
  }
  return plVar3;
}

