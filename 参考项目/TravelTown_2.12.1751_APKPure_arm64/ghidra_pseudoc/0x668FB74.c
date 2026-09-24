/* Ghidra 12.1.2 native pseudocode; RVA 0x668FB74; Merger.Game.Views.BoardUIView.DisableUI; status ok */


void Merger_Game_Views_BoardUIView__DisableUI(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_x30;
  undefined1 auVar14 [16];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x067b1434(*(long *)(param_1 + 0x48),0,0);
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar8 = 0;
      param_1 = unaff_x19;
      goto LAB_069b9fc4;
    }
  }
  lVar5 = func_0x03280cac();
  if (*(long *)(lVar5 + 0x48) != 0) {
    func_0x067b1434(*(long *)(lVar5 + 0x48),1,0);
    plVar4 = *(long **)(lVar5 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar8 = 1;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = 0x678fbac;
LAB_069b9fc4:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
      *(long *)((long)register0x00000008 + -8) = param_1;
      uVar7 = func_0x0726f3bc(plVar4,0,0);
      if ((uVar7 & 1) == 0) {
        *(undefined1 *)(plVar4 + 0x28) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x069ba00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
        return;
      }
      return;
    }
  }
  auVar14 = func_0x03280cac();
  lVar10 = auVar14._8_8_;
  lVar5 = auVar14._0_8_;
  if ((bRam0000000007e28294 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d38b0);
    func_0x03280a18(PTR_DAT_077dc160);
    func_0x03280a18(PTR_DAT_077727d0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e28294 = 1;
  }
  puVar2 = PTR_DAT_077727d0;
  if ((lVar10 != 0) && (plVar4 = *(long **)(lVar10 + 0x10), plVar4 != (long *)0x0)) {
    lVar9 = *plVar4;
    lVar13 = *(long *)(lVar5 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077727d0) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_0678fcb0;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077727d0,7);
LAB_0678fcb0:
    uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    if (lVar13 != 0) {
      uVar7 = func_0x06212f0c(lVar13,uVar3,0);
      if ((uVar7 & 1) != 0) {
        plVar4 = *(long **)(lVar10 + 0x10);
        if (plVar4 == (long *)0x0) goto LAB_0678fe04;
        lVar10 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0678fd28;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar2,0);
LAB_0678fd28:
        plVar4 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_077dc160 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_077dc160)) {
            uVar12 = *(undefined8 *)(lVar5 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar7 = func_0x06fdeb74(uVar12,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(lVar5 + 0x58) != 0) {
                uVar7 = func_0x06fdb3e4(*(long *)(lVar5 + 0x58),0);
                puVar2 = PTR_DAT_077d38b0;
                if ((uVar7 & 1) == 0) {
                  return;
                }
                lVar5 = *(long *)(lVar5 + 0x58);
                if (*(int *)(*(long *)PTR_DAT_077d38b0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                if (lVar5 != 0) {
                  uVar3 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
                  if (pcRam0000000007e2d880 == (code *)0x0) {
                    pcRam0000000007e2d880 = (code *)func_0x032809dc(&UNK_01792d23);
                  }
                    /* WARNING: Could not recover jumptable at 0x06f92814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000007e2d880)(lVar5,uVar3);
                  return;
                }
              }
              goto LAB_0678fe04;
            }
          }
        }
      }
      return;
    }
  }
LAB_0678fe04:
  lVar5 = func_0x03280cac();
  if ((*(long *)(lVar5 + 0x68) != 0) &&
     (lVar10 = func_0x06fdbed0(*(long *)(lVar5 + 0x68),0), lVar10 != 0)) {
    uVar7 = func_0x06fdf2b0(lVar10,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x68) != 0) &&
       (lVar5 = func_0x06fdbed0(*(long *)(lVar5 + 0x68),0), lVar5 != 0)) {
      if (pcRam0000000007e2fbf0 == (code *)0x0) {
        pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
      }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000007e2fbf0)(lVar5,0);
      return;
    }
  }
  lVar5 = func_0x03280cac();
  *(undefined4 *)(lVar5 + 0x74) = 0;
  return;
}

