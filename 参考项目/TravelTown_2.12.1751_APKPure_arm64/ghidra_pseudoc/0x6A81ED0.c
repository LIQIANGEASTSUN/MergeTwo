/* Ghidra 12.1.2 native pseudocode; RVA 0x6A81ED0; Merger.MergeBoard.Logic.ItemSelectionBoxPickHandler.ShowPopup; status ok */


/* WARNING: Possible PIC construction at 0x06b82414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b82418) */
/* WARNING: Removing unreachable block (ram,0x06b8241c) */
/* WARNING: Removing unreachable block (ram,0x06b8246c) */
/* WARNING: Removing unreachable block (ram,0x06b82484) */
/* WARNING: Removing unreachable block (ram,0x06b8248c) */
/* WARNING: Removing unreachable block (ram,0x06b824b4) */
/* WARNING: Removing unreachable block (ram,0x06b82498) */
/* WARNING: Removing unreachable block (ram,0x06b824a4) */
/* WARNING: Removing unreachable block (ram,0x06b824c0) */
/* WARNING: Removing unreachable block (ram,0x06b824e8) */
/* WARNING: Removing unreachable block (ram,0x06b82504) */
/* WARNING: Removing unreachable block (ram,0x06b8250c) */
/* WARNING: Removing unreachable block (ram,0x06b82534) */
/* WARNING: Removing unreachable block (ram,0x06b82518) */
/* WARNING: Removing unreachable block (ram,0x06b82524) */
/* WARNING: Removing unreachable block (ram,0x06b82540) */
/* WARNING: Removing unreachable block (ram,0x06b82584) */
/* WARNING: Removing unreachable block (ram,0x06b8255c) */
/* WARNING: Removing unreachable block (ram,0x06b82590) */
/* WARNING: Removing unreachable block (ram,0x06b825a0) */
/* WARNING: Removing unreachable block (ram,0x06b8257c) */
/* WARNING: Removing unreachable block (ram,0x06b825a4) */
/* WARNING: Removing unreachable block (ram,0x06b825c4) */
/* WARNING: Removing unreachable block (ram,0x06b825d4) */
/* WARNING: Removing unreachable block (ram,0x06b825bc) */
/* WARNING: Removing unreachable block (ram,0x06b825d8) */
/* WARNING: Removing unreachable block (ram,0x06b82610) */
/* WARNING: Removing unreachable block (ram,0x06b82628) */
/* WARNING: Removing unreachable block (ram,0x06b8266c) */
/* WARNING: Removing unreachable block (ram,0x06b82694) */
/* WARNING: Removing unreachable block (ram,0x06b8269c) */
/* WARNING: Removing unreachable block (ram,0x06b826c4) */
/* WARNING: Removing unreachable block (ram,0x06b826a8) */
/* WARNING: Removing unreachable block (ram,0x06b826b4) */
/* WARNING: Removing unreachable block (ram,0x06b826d0) */
/* WARNING: Removing unreachable block (ram,0x06b82708) */
/* WARNING: Removing unreachable block (ram,0x06b82730) */
/* WARNING: Removing unreachable block (ram,0x06b82738) */
/* WARNING: Removing unreachable block (ram,0x06b82760) */
/* WARNING: Removing unreachable block (ram,0x06b82744) */
/* WARNING: Removing unreachable block (ram,0x06b82750) */
/* WARNING: Removing unreachable block (ram,0x06b82770) */
/* WARNING: Removing unreachable block (ram,0x06b8281c) */
/* WARNING: Removing unreachable block (ram,0x06b827a8) */
/* WARNING: Removing unreachable block (ram,0x06b827b8) */
/* WARNING: Removing unreachable block (ram,0x06b827c0) */
/* WARNING: Removing unreachable block (ram,0x06b827e8) */
/* WARNING: Removing unreachable block (ram,0x06b827cc) */
/* WARNING: Removing unreachable block (ram,0x06b827d8) */
/* WARNING: Removing unreachable block (ram,0x06b827f8) */

void Merger_MergeBoard_Logic_ItemSelectionBoxPickHandler__ShowPopup
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((bRam0000000007e2a769 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07772358);
    func_0x03280a18(PTR_DAT_0776fc60);
    func_0x03280a18(PTR_DAT_0776f8c8);
    func_0x03280a18(PTR_DAT_0776f8d8);
    func_0x03280a18(PTR_DAT_07774930);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077f3b30);
    func_0x03280a18(PTR_DAT_07772600);
    func_0x03280a18(PTR_DAT_077f3b38);
    bRam0000000007e2a769 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    lVar10 = *(long *)(param_1 + 0x30);
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b81fd4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07779820,0);
LAB_06b81fd4:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    puVar3 = PTR_DAT_077f3b30;
    if (lVar10 != 0) {
      lVar6 = func_0x064e7128(lVar10,uVar5,0);
      uVar5 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x064e2ed8(uVar5,param_2,param_3,param_4,param_5,0);
      if (lVar6 == 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x40);
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07774930) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_06b8208c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07774930,4);
LAB_06b8208c:
        uVar8 = (*(code *)*puVar4)(plVar11,lVar6,puVar4[1]);
        puVar3 = PTR_DAT_0776fc60;
        if ((uVar8 & 1) == 0) {
          return;
        }
        plVar11 = *(long **)(param_1 + 0x10);
        lVar10 = *(long *)PTR_DAT_0776fc60;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar10 = *(long *)puVar3;
        }
        puVar2 = PTR_DAT_0776f8d8;
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x420);
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0776f8d8) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
                goto LAB_06b82124;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0776f8d8,0xb);
LAB_06b82124:
          uVar8 = (*(code *)*puVar4)(plVar11,uVar12,puVar4[1]);
          if ((uVar8 & 1) == 0) {
            return;
          }
          uVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07772358);
          func_0x06a59f4c(uVar12,*(undefined8 *)PTR_DAT_077f3b38,0);
          puVar1 = PTR_DAT_0776f8c8;
          plVar11 = *(long **)(param_1 + 0x48);
          if (plVar11 != (long *)0x0) {
            lVar10 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0776f8c8) {
                  puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_06b821d4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0776f8c8,0);
LAB_06b821d4:
            (*(code *)*puVar4)(plVar11,uVar12,lVar6,puVar4[1]);
            lVar10 = *(long *)puVar3;
            plVar11 = *(long **)(param_1 + 0x10);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar10 = *(long *)puVar3;
            }
            uVar14 = *(undefined8 *)(param_1 + 0x68);
            uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x420);
            if (*(int *)(*(long *)PTR_DAT_07772600 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar5 = func_0x06953620(uVar14,uVar5,0);
            if (plVar11 != (long *)0x0) {
              lVar10 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                    goto LAB_06b8228c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,9);
LAB_06b8228c:
              (*(code *)*puVar4)(plVar11,uVar13,uVar5,puVar4[1]);
              plVar11 = *(long **)(param_1 + 0x48);
              if (plVar11 != (long *)0x0) {
                lVar10 = *plVar11;
                uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                      goto LAB_06b822f8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar1,3);
LAB_06b822f8:
                    /* WARNING: Could not recover jumptable at 0x06b8231c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar4)(plVar11,uVar12,lVar6,puVar4[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  puVar3 = PTR_DAT_07831b28;
  if ((bRam0000000007e2a76a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_077f38e0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077f38e8);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_077f38f0);
    func_0x03280a18(PTR_DAT_077f38f8);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077f3900);
    func_0x03280a18(PTR_DAT_07831b30);
    func_0x03280a18(PTR_DAT_07831b38);
    func_0x03280a18(PTR_DAT_07831b40);
    func_0x03280a18(PTR_DAT_07831b28);
    bRam0000000007e2a76a = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar3);
  return;
}

