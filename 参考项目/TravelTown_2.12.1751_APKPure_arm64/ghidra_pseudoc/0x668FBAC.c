/* Ghidra 12.1.2 native pseudocode; RVA 0x668FBAC; Merger.Game.Views.BoardUIView.EnableUI; status ok */


void Merger_Game_Views_BoardUIView__EnableUI(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x067b1434(*(long *)(param_1 + 0x48),1,0);
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 != (long *)0x0) {
      uVar6 = func_0x0726f3bc(plVar4,0,0);
      if ((uVar6 & 1) == 0) {
        *(undefined1 *)(plVar4 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x069ba00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
        return;
      }
      return;
    }
  }
  auVar13 = func_0x03280cac();
  lVar8 = auVar13._8_8_;
  lVar10 = auVar13._0_8_;
  if ((bRam0000000007e28294 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d38b0);
    func_0x03280a18(PTR_DAT_077dc160);
    func_0x03280a18(PTR_DAT_077727d0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e28294 = 1;
  }
  puVar2 = PTR_DAT_077727d0;
  if ((lVar8 != 0) && (plVar4 = *(long **)(lVar8 + 0x10), plVar4 != (long *)0x0)) {
    lVar7 = *plVar4;
    lVar12 = *(long *)(lVar10 + 0x28);
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077727d0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_0678fcb0;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_077727d0,7);
LAB_0678fcb0:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar12 != 0) {
      uVar6 = func_0x06212f0c(lVar12,uVar3,0);
      if ((uVar6 & 1) != 0) {
        plVar4 = *(long **)(lVar8 + 0x10);
        if (plVar4 == (long *)0x0) goto LAB_0678fe04;
        lVar8 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0678fd28;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar2,0);
LAB_0678fd28:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_077dc160 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_077dc160)) {
            uVar11 = *(undefined8 *)(lVar10 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar6 = func_0x06fdeb74(uVar11,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(lVar10 + 0x58) != 0) {
                uVar6 = func_0x06fdb3e4(*(long *)(lVar10 + 0x58),0);
                puVar2 = PTR_DAT_077d38b0;
                if ((uVar6 & 1) == 0) {
                  return;
                }
                lVar10 = *(long *)(lVar10 + 0x58);
                if (*(int *)(*(long *)PTR_DAT_077d38b0 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                if (lVar10 != 0) {
                  uVar3 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
                  if (pcRam0000000007e2d880 == (code *)0x0) {
                    pcRam0000000007e2d880 = (code *)func_0x032809dc(&UNK_01792d23);
                  }
                    /* WARNING: Could not recover jumptable at 0x06f92814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000007e2d880)(lVar10,uVar3);
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
  lVar10 = func_0x03280cac();
  if ((*(long *)(lVar10 + 0x68) != 0) &&
     (lVar8 = func_0x06fdbed0(*(long *)(lVar10 + 0x68),0), lVar8 != 0)) {
    uVar6 = func_0x06fdf2b0(lVar8,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar10 + 0x68) != 0) &&
       (lVar10 = func_0x06fdbed0(*(long *)(lVar10 + 0x68),0), lVar10 != 0)) {
      if (pcRam0000000007e2fbf0 == (code *)0x0) {
        pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
      }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000007e2fbf0)(lVar10,0);
      return;
    }
  }
  lVar10 = func_0x03280cac();
  *(undefined4 *)(lVar10 + 0x74) = 0;
  return;
}

