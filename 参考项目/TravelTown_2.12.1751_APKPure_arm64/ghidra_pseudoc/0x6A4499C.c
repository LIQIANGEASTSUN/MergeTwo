/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4499C; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.AddItemView; status ok */


ulong Merger_MergeBoard_View_Items_MergeBoardItemsContainer__AddItemView
                (ulong param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  uVar5 = param_1;
  plVar9 = param_3;
  if ((bRam0000000007e2a564 & 1) == 0) {
    uVar5 = func_0x03280a18(PTR_DAT_0782fa60);
    bRam0000000007e2a564 = 1;
  }
  if (param_3 == (long *)0x0) {
    return uVar5;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar5 = func_0x04fe2d68(*(long *)(param_1 + 0x48),param_2,param_3,
                            *(undefined8 *)PTR_DAT_0782fa60);
    lVar10 = *(long *)(param_1 + 0x58);
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06b44a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),param_3,*(undefined8 *)(lVar10 + 0x28));
      return uVar5;
    }
    return uVar5;
  }
  auVar13 = func_0x03280cac();
  lVar10 = auVar13._0_8_;
  uVar5 = auVar13._8_8_ & 0xffffffff;
  if ((bRam0000000007e2a565 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809538);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0782f760);
    bRam0000000007e2a565 = 1;
  }
  if (*(long *)(lVar10 + 0x28) != 0) {
    uVar6 = func_0x06b31b90(*(long *)(lVar10 + 0x28),uVar5);
    if ((uVar6 & 1) == 0) {
      return uVar6;
    }
    if (((*(long *)(lVar10 + 0x28) != 0) &&
        (lVar7 = func_0x06b31c3c(*(long *)(lVar10 + 0x28),uVar5), lVar7 != 0)) &&
       (*(long *)(lVar10 + 0x40) != 0)) {
      uVar8 = Merger_MergeBoard_View_BlockerItemViewLoader__GetBlockerAsset
                        (*(long *)(lVar10 + 0x40),*(undefined8 *)(lVar7 + 0x20));
      puVar2 = PTR_DAT_0774e4e0;
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
      }
      uVar5 = func_0x06fe351c(uVar8,0);
      if ((uVar5 & 1) == 0) {
        return uVar5;
      }
      if (plVar9 != (long *)0x0) {
        lVar10 = *plVar9;
        lVar7 = *(long *)PTR_DAT_07809538;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06b44b50;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        lVar10 = func_0x03256b10(plVar9);
LAB_06b44b50:
        lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar7);
        plVar9 = (long *)(**(code **)(lVar10 + 8))(plVar9,lVar10);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar2);
        }
        uVar5 = func_0x06fe351c(plVar9,0);
        puVar2 = PTR_DAT_0774e4e0;
        if ((uVar5 & 1) == 0) {
          return uVar5;
        }
        if (plVar9 != (long *)0x0) {
          if ((bRam0000000007e289ec & 1) == 0) {
            func_0x03280a18(PTR_DAT_0780d990,uVar8,0);
            func_0x03280a18(PTR_DAT_0780dbf0);
            func_0x03280a18(PTR_DAT_0774e4e0);
            bRam0000000007e289ec = 1;
          }
          plVar12 = plVar9 + 9;
          lVar10 = *plVar12;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar5 = func_0x06fdeb74(lVar10,0,0);
          if ((uVar5 & 1) != 0) {
            lVar10 = *plVar12;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x06fe41c8(lVar10,0);
            *plVar12 = 0;
            func_0x032809c4(plVar12,0);
          }
          puVar1 = PTR_DAT_0780dbf0;
          uVar3 = func_0x069aaf28(plVar9,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar2);
          }
          lVar10 = func_0x03e3cdbc(uVar8,uVar3,*(undefined8 *)puVar1);
          plVar9[9] = lVar10;
          func_0x032809c4(plVar12,lVar10);
          if (plVar9[9] != 0) {
            *(long *)(plVar9[9] + 0x28) = plVar9[7];
            func_0x032809c4();
                    /* WARNING: Could not recover jumptable at 0x068393f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
            return uVar5;
          }
          lVar10 = func_0x03280cac();
          puVar2 = PTR_DAT_0774e4e0;
          if ((bRam0000000007e289ed & 1) == 0) {
            func_0x03280a18(PTR_DAT_0780d990);
            func_0x03280a18(PTR_DAT_077c1d88);
            func_0x03280a18(PTR_DAT_0774e4e0);
            bRam0000000007e289ed = 1;
          }
          uVar8 = *(undefined8 *)(lVar10 + 0x48);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar5 = func_0x06fdeb74(uVar8,0,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          if (*(long *)(lVar10 + 0x48) != 0) {
            if (*(long *)(*(long *)(lVar10 + 0x48) + 0x58) == 0) {
              return 0;
            }
            plVar9 = *(long **)(lVar10 + 0x38);
            if (plVar9 != (long *)0x0) {
              lVar7 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c1d88) {
                    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                    goto LAB_068394e4;
                  }
                  uVar5 = uVar5 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c1d88,6);
LAB_068394e4:
              lVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
              if (lVar7 != 0) {
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              }
              if (*(long *)(lVar10 + 0x48) != 0) {
                func_0x038ee7ac(*(undefined8 *)(*(long *)(lVar10 + 0x48) + 0x58),0);
                return 1;
              }
            }
          }
          uVar5 = func_0x03280cac();
          puVar2 = PTR_DAT_0780d9a0;
          if ((bRam0000000007e289a9 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0780d9a0);
            bRam0000000007e289a9 = 1;
          }
          puVar1 = PTR_DAT_0774e4e0;
          uVar8 = *(undefined8 *)puVar2;
          if ((bRam0000000007e2fb28 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0774e4e0,0);
            bRam0000000007e2fb28 = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          return uVar5;
        }
      }
    }
  }
  lVar10 = func_0x03280cac();
  return *(ulong *)(lVar10 + 0x48);
}

