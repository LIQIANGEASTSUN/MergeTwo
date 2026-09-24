/* Ghidra 12.1.2 native pseudocode; RVA 0x6A82828; Merger.MergeBoard.Logic.ItemSelectionBoxPickHandler.SendChangeStateOperation; status ok */


void Merger_MergeBoard_Logic_ItemSelectionBoxPickHandler__SendChangeStateOperation
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((bRam0000000007e2a76c & 1) == 0) {
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_077c1dd8);
    func_0x03280a18(PTR_DAT_07830308);
    func_0x03280a18(PTR_DAT_077c1de0);
    func_0x03280a18(PTR_DAT_077c1dc0);
    func_0x03280a18(PTR_DAT_077c1db8);
    func_0x03280a18(PTR_DAT_07807698);
    bRam0000000007e2a76c = 1;
  }
  puVar2 = PTR_DAT_078304b0;
  plVar10 = *(long **)(param_1 + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_078304b0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06b82908;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_078304b0,2);
LAB_06b82908:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,param_2,0,puVar4[1]);
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_06b82974;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar2,4);
LAB_06b82974:
      uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      puVar3 = PTR_DAT_077c1dc0;
      puVar2 = PTR_DAT_077c1db8;
      plVar10 = *(long **)(param_1 + 0x60);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        lVar12 = *(long *)PTR_DAT_077c1dd8;
        uVar11 = *(undefined8 *)PTR_DAT_07807698;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
              lVar6 = lVar6 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_06b82a04;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        lVar6 = func_0x03256b10(plVar10);
LAB_06b82a04:
        lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar12);
        uVar5 = (**(code **)(lVar6 + 8))(plVar10,uVar11,uVar5,0,lVar6);
        plVar10 = *(long **)(param_1 + 0x60);
        lVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x04143c38(lVar6,*(undefined8 *)puVar3);
        if (lVar6 != 0) {
          lVar12 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)PTR_DAT_077c1de0;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              puVar4 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *puVar4 = uVar5;
              func_0x032809c4(puVar4,uVar5);
            }
            else {
              func_0x0414446c(lVar6,uVar5,
                              *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            if (plVar10 != (long *)0x0) {
              lVar12 = *plVar10;
              uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar7 != 0) {
                piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07830308) {
                    puVar4 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_06b82b0c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07830308,0);
LAB_06b82b0c:
                    /* WARNING: Could not recover jumptable at 0x06b82b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar10,lVar6,0,puVar4[1]);
              return;
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

