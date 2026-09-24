/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5FF24; Merger.MergeBoardSellItemCapability.Systems.UndoSellItemSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b6017c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b60180) */
/* WARNING: Removing unreachable block (ram,0x06b60184) */
/* WARNING: Removing unreachable block (ram,0x06b601e4) */
/* WARNING: Removing unreachable block (ram,0x06b601fc) */
/* WARNING: Removing unreachable block (ram,0x06b60204) */
/* WARNING: Removing unreachable block (ram,0x06b6027c) */
/* WARNING: Removing unreachable block (ram,0x06b60210) */
/* WARNING: Removing unreachable block (ram,0x06b6021c) */
/* WARNING: Removing unreachable block (ram,0x06b6028c) */
/* WARNING: Removing unreachable block (ram,0x06b6029c) */
/* WARNING: Removing unreachable block (ram,0x06b602b4) */
/* WARNING: Removing unreachable block (ram,0x06b602bc) */
/* WARNING: Removing unreachable block (ram,0x06b60348) */
/* WARNING: Removing unreachable block (ram,0x06b602c8) */
/* WARNING: Removing unreachable block (ram,0x06b602d4) */
/* WARNING: Removing unreachable block (ram,0x06b60358) */
/* WARNING: Removing unreachable block (ram,0x06b60368) */
/* WARNING: Removing unreachable block (ram,0x06b60374) */

void Merger_MergeBoardSellItemCapability_Systems_UndoSellItemSystem__Tick
               (long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [6];
  undefined4 uStack_4c;
  long lStack_48;
  
  if ((bRam0000000007e2a65f & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07830700);
    func_0x03280a18(PTR_DAT_07830708);
    func_0x03280a18(PTR_DAT_07830710);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07830718);
    func_0x03280a18(PTR_DAT_07830720);
    func_0x03280a18(PTR_DAT_07830728);
    func_0x03280a18(PTR_DAT_07830730);
    func_0x03280a18(PTR_DAT_07830738);
    func_0x03280a18(PTR_DAT_07830740);
    bRam0000000007e2a65f = 1;
  }
  lStack_48 = 0;
  uStack_4c = 0;
  if (param_2[1] != 0) {
    uVar4 = func_0x03ec5020(param_2[1],&lStack_48,*(undefined8 *)PTR_DAT_07830730);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (lStack_48 != 0) {
      uVar10 = *(undefined8 *)(lStack_48 + 0x10);
      lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830710);
      func_0x06014d28(lVar5,uVar10,0);
      if (lVar5 != 0) {
        uVar3 = func_0x03d1ae90(lVar5,*(undefined8 *)PTR_DAT_077c0ec8);
        func_0x03d1b250(auStack_80,lVar5,*(undefined8 *)PTR_DAT_0777a488);
        plVar11 = *(long **)(param_1 + 0x20);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_06b600e0;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,9);
LAB_06b600e0:
          plVar11 = (long *)(*(code *)*puVar6)(plVar11,auStack_80[0],puVar6[1]);
          uStack_98 = param_2[1];
          uStack_a0 = *param_2;
          uStack_88 = param_2[3];
          uStack_90 = param_2[2];
          uVar4 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x10),&uStack_a0,uVar3,&uStack_4c,0);
          puVar2 = PTR_DAT_0777e548;
          if ((uVar4 & 1) != 0) {
            func_0x03d1c618(lVar5,uStack_4c,*(undefined8 *)PTR_DAT_07830708);
            func_0x03d1c348(lVar5,*(undefined8 *)PTR_DAT_07830700);
            uStack_b8 = param_2[1];
            uStack_c0 = *param_2;
            uStack_a8 = param_2[3];
            uStack_b0 = param_2[2];
            func_0x06b98e60(&uStack_c0,lVar5,0,0);
            func_0x03280ca0(*(undefined8 *)PTR_DAT_07830718);
            return;
          }
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            lVar12 = param_2[2];
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e548) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                  goto LAB_06b602f4;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777e548,3);
LAB_06b602f4:
            lVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            if (lVar7 != 0) {
              lVar8 = *plVar11;
              uVar3 = *(undefined4 *)(lVar7 + 0x14);
              uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar4 != 0) {
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_06b60398;
                  }
                  uVar4 = uVar4 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar2,3);
LAB_06b60398:
              lVar7 = (*(code *)*puVar6)(plVar11,puVar6[1]);
              if (lVar7 != 0) {
                uVar1 = *(undefined4 *)(lVar7 + 0x18);
                uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830738);
                func_0x06b9ad68(uVar10,lVar5,*(undefined8 *)PTR_DAT_07830740,plVar11,auStack_80[0],
                                uVar3,uVar1,0);
                if (lVar12 != 0) {
                  func_0x03ec33e4(lVar12,uVar10,*(undefined8 *)PTR_DAT_07830728);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

