/* Ghidra 12.1.2 native pseudocode; RVA 0x6A73F14; Merger.MergeBoard.Systems.ResourceItemDropSystem.SpawnResourceItem; status ok */


void Merger_MergeBoard_Systems_ResourceItemDropSystem__SpawnResourceItem
               (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_077730b8;
  if ((bRam0000000007e2a6f6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6f6 = 1;
  }
  plVar12 = *(long **)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar3 = (long *)func_0x0624cb20(param_3,0);
  if (plVar3 != (long *)0x0) {
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779818) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b74060;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_07779818,0);
LAB_06b74060:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077730f8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b740c8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077730f8,0);
LAB_06b740c8:
      plVar12 = (long *)(*(code *)*puVar4)(plVar12,uVar5,puVar4[1]);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06b74134;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777c248,0);
LAB_06b74134:
        lVar9 = (*(code *)*puVar4)(plVar12,puVar4[1]);
        if (lVar9 != 0) {
          uVar5 = func_0x0414419c(lVar9,0,*(undefined8 *)PTR_DAT_0777e510);
          puVar2 = PTR_DAT_0782fe80;
          puVar1 = PTR_DAT_0774f158;
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 != (long *)0x0) {
            lVar9 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c16b0) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_06b741c8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077c16b0,0);
LAB_06b741c8:
            uVar5 = (*(code *)*puVar4)(plVar12,uVar5,param_4,4,0,0,puVar4[1]);
            uStack_68 = param_2[1];
            uStack_70 = *param_2;
            uStack_58 = param_2[3];
            uStack_60 = param_2[2];
            func_0x06b98e60(&uStack_70,uVar5,param_5,0);
            uVar7 = *(undefined8 *)puVar1;
            uVar7 = func_0x06ba3134(param_5,*(undefined8 *)(param_1 + 0x10),uVar7,uVar7,uVar7,0);
            uVar8 = *(undefined8 *)puVar1;
            uVar8 = func_0x06ba3134(uVar5,*(undefined8 *)(param_1 + 0x10),uVar8,uVar8,uVar8,0);
            lVar9 = param_2[2];
            uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
            func_0x06b9aa90(uVar6,param_5,uVar5,param_6,param_4,4,uVar7,uVar8,0,0,0,0);
            puVar1 = PTR_DAT_0782fe78;
            if (lVar9 != 0) {
              func_0x03ec33e4(lVar9,uVar6,*(undefined8 *)PTR_DAT_0782feb0);
              lVar9 = param_2[2];
              uVar7 = func_0x03280ca0(*(undefined8 *)puVar1);
              func_0x06b9a828(uVar7,uVar5,uVar8,0);
              if (lVar9 != 0) {
                func_0x03ec33e4(lVar9,uVar7,*(undefined8 *)PTR_DAT_0782fea8);
                return;
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

