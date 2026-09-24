/* Ghidra 12.1.2 native pseudocode; RVA 0x6A44A34; Merger.MergeBoard.View.Items.MergeBoardItemsContainer.CreateBlockerView; status ok */


ulong Merger_MergeBoard_View_Items_MergeBoardItemsContainer__CreateBlockerView
                (long param_1,undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  if ((bRam0000000007e2a565 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809538);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0782f760);
    bRam0000000007e2a565 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar5 = func_0x06b31b90(*(long *)(param_1 + 0x28),param_2);
    if ((uVar5 & 1) == 0) {
      return uVar5;
    }
    if (((*(long *)(param_1 + 0x28) != 0) &&
        (lVar6 = func_0x06b31c3c(*(long *)(param_1 + 0x28),param_2), lVar6 != 0)) &&
       (*(long *)(param_1 + 0x40) != 0)) {
      uVar7 = Merger_MergeBoard_View_BlockerItemViewLoader__GetBlockerAsset
                        (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar6 + 0x20));
      puVar2 = PTR_DAT_0774e4e0;
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
      }
      uVar5 = func_0x06fe351c(uVar7,0);
      if ((uVar5 & 1) == 0) {
        return uVar5;
      }
      if (param_3 != (long *)0x0) {
        lVar6 = *param_3;
        lVar11 = *(long *)PTR_DAT_07809538;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
              lVar6 = lVar6 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_06b44b50;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        lVar6 = func_0x03256b10(param_3);
LAB_06b44b50:
        lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar11);
        plVar8 = (long *)(**(code **)(lVar6 + 8))(param_3,lVar6);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)puVar2);
        }
        uVar5 = func_0x06fe351c(plVar8,0);
        puVar2 = PTR_DAT_0774e4e0;
        if ((uVar5 & 1) == 0) {
          return uVar5;
        }
        if (plVar8 != (long *)0x0) {
          if ((bRam0000000007e289ec & 1) == 0) {
            func_0x03280a18(PTR_DAT_0780d990,uVar7,0);
            func_0x03280a18(PTR_DAT_0780dbf0);
            func_0x03280a18(PTR_DAT_0774e4e0);
            bRam0000000007e289ec = 1;
          }
          plVar10 = plVar8 + 9;
          lVar6 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar5 = func_0x06fdeb74(lVar6,0,0);
          if ((uVar5 & 1) != 0) {
            lVar6 = *plVar10;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x06fe41c8(lVar6,0);
            *plVar10 = 0;
            func_0x032809c4(plVar10,0);
          }
          puVar1 = PTR_DAT_0780dbf0;
          uVar3 = func_0x069aaf28(plVar8,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)puVar2);
          }
          lVar6 = func_0x03e3cdbc(uVar7,uVar3,*(undefined8 *)puVar1);
          plVar8[9] = lVar6;
          func_0x032809c4(plVar10,lVar6);
          if (plVar8[9] != 0) {
            *(long *)(plVar8[9] + 0x28) = plVar8[7];
            func_0x032809c4();
                    /* WARNING: Could not recover jumptable at 0x068393f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
            return uVar5;
          }
          lVar6 = func_0x03280cac();
          puVar2 = PTR_DAT_0774e4e0;
          if ((bRam0000000007e289ed & 1) == 0) {
            func_0x03280a18(PTR_DAT_0780d990);
            func_0x03280a18(PTR_DAT_077c1d88);
            func_0x03280a18(PTR_DAT_0774e4e0);
            bRam0000000007e289ed = 1;
          }
          uVar7 = *(undefined8 *)(lVar6 + 0x48);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          uVar5 = func_0x06fdeb74(uVar7,0,0);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          if (*(long *)(lVar6 + 0x48) != 0) {
            if (*(long *)(*(long *)(lVar6 + 0x48) + 0x58) == 0) {
              return 0;
            }
            plVar8 = *(long **)(lVar6 + 0x38);
            if (plVar8 != (long *)0x0) {
              lVar11 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 != 0) {
                piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c1d88) {
                    puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                    goto LAB_068394e4;
                  }
                  uVar5 = uVar5 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c1d88,6);
LAB_068394e4:
              lVar11 = (*(code *)*puVar4)(plVar8,puVar4[1]);
              if (lVar11 != 0) {
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
              }
              if (*(long *)(lVar6 + 0x48) != 0) {
                func_0x038ee7ac(*(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x58),0);
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
          uVar7 = *(undefined8 *)puVar2;
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
  lVar6 = func_0x03280cac();
  return *(ulong *)(lVar6 + 0x48);
}

