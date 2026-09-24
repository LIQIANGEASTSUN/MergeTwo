/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A5AA90; bound 476 bytes; Merger.MergeBoardQueue.Logic.BoardQueueProcessor.Enqueue; status ok */


void Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Enqueue
               (long param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  uVar11 = param_3;
  uVar8 = param_4;
  if ((bRam0000000007e2a620 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_077c0f10);
    func_0x03280a18(PTR_DAT_078304a8);
    bRam0000000007e2a620 = 1;
  }
  if (param_2 != 0) {
    func_0x03d1b250(auStack_70,param_2,*(undefined8 *)PTR_DAT_0777a488);
    plVar13 = *(long **)(param_1 + 0x10);
    uVar5 = func_0x06b59b14(param_1);
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c0f10) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_06b5ab78;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_077c0f10,6);
LAB_06b5ab78:
      (*(code *)*puVar6)(plVar13,param_3,uStack_68,uVar5,0,param_4 & 0xffffffff,puVar6[1]);
      plVar13 = *(long **)(param_1 + 0x20);
      uVar11 = uStack_68;
      uVar8 = uVar5;
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        lVar9 = *(long *)PTR_DAT_078304a8;
        uVar2 = *(ushort *)(lVar10 + 0x12e);
        uVar11 = (ulong)uVar2;
        if ((int)param_4 == 9) {
          if (uVar2 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                iVar1 = *piVar12 + 1;
LAB_06b5ac38:
                puVar6 = (undefined8 *)(lVar10 + (long)iVar1 * 0x10 + 0x138);
                goto LAB_06b5ac3c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          uVar7 = 1;
        }
        else {
          if (uVar2 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                iVar1 = *piVar12;
                goto LAB_06b5ac38;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          uVar7 = 0;
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar13,lVar9,uVar7);
LAB_06b5ac3c:
        (*(code *)*puVar6)(plVar13,param_2,param_3,puVar6[1]);
        return;
      }
    }
  }
  auVar14 = func_0x03280cac();
  puVar4 = PTR_DAT_0774e908;
  puVar3 = PTR_DAT_0774e900;
  if ((bRam0000000007e2a61f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e908);
    func_0x03280a18(PTR_DAT_0774ea10);
    func_0x03280a18(PTR_DAT_0774e900);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_07780650);
    bRam0000000007e2a61f = 1;
  }
  lVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04fe1fa4(lVar9,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_077730b8;
  if (lVar9 != 0) {
    func_0x04fe2d68(lVar9,*(undefined8 *)PTR_DAT_07780650,auVar14._8_8_,
                    *(undefined8 *)PTR_DAT_0774ea10);
    plVar13 = *(long **)(auVar14._0_8_ + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar7 = func_0x0624cb20(uVar11 & 0xffffffff,0);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07773688) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto code_r0x06b5adbc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07773688,3);
code_r0x06b5adbc:
                    /* WARNING: Could not recover jumptable at 0x06b5adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar13,uVar7,uVar8 & 0xffffffff,0,8,lVar9,1,puVar6[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

