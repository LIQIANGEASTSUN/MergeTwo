/* Ghidra 12.1.2 native pseudocode; RVA 0x668FBE4; Merger.Game.Views.BoardUIView.OnRewardIconArrived; status ok */


void Merger_Game_Views_BoardUIView__OnRewardIconArrived(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  if ((bRam0000000007e28294 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d38b0);
    func_0x03280a18(PTR_DAT_077dc160);
    func_0x03280a18(PTR_DAT_077727d0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07809198);
    bRam0000000007e28294 = 1;
  }
  puVar2 = PTR_DAT_077727d0;
  if ((param_2 != 0) && (plVar10 = *(long **)(param_2 + 0x10), plVar10 != (long *)0x0)) {
    lVar5 = *plVar10;
    lVar9 = *(long *)(param_1 + 0x28);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077727d0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_0678fcb0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077727d0,7);
LAB_0678fcb0:
    uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar9 != 0) {
      uVar6 = func_0x06212f0c(lVar9,uVar3,0);
      if ((uVar6 & 1) != 0) {
        plVar10 = *(long **)(param_2 + 0x10);
        if (plVar10 == (long *)0x0) goto LAB_0678fe04;
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0678fd28;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,0);
LAB_0678fd28:
        plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_077dc160 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_077dc160)) {
            uVar8 = *(undefined8 *)(param_1 + 0x58);
            if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar6 = func_0x06fdeb74(uVar8,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(long *)(param_1 + 0x58) != 0) {
                uVar6 = func_0x06fdb3e4(*(long *)(param_1 + 0x58),0);
                puVar2 = PTR_DAT_077d38b0;
                if ((uVar6 & 1) == 0) {
                  return;
                }
                lVar5 = *(long *)(param_1 + 0x58);
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
     (lVar9 = func_0x06fdbed0(*(long *)(lVar5 + 0x68),0), lVar9 != 0)) {
    uVar6 = func_0x06fdf2b0(lVar9,0);
    if ((uVar6 & 1) == 0) {
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

