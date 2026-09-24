/* Ghidra 12.1.2 native pseudocode; RVA 0x6A56F24; Merger.MergeBoardQueue.Systems.BoardQueueSystem.TrySpawnEntityFromQueue; status ok */

ulong Merger_MergeBoardQueue_Systems_BoardQueueSystem__TrySpawnEntityFromQueue
                (long param_1,undefined8 *param_2,undefined8 param_3,long *param_4,long param_5,
                undefined8 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar8 = param_4;
  lVar10 = param_5;
  if ((bRam0000000007e2a5fc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a5fc = 1;
  }
  uVar9 = (undefined4)lVar10;
  *param_6 = 0;
  func_0x032809c4(param_6,0);
  *param_7 = 0;
  func_0x032809c4(param_7,0);
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  puVar6 = param_8;
  uVar2 = func_0x06b5730c(param_1,&uStack_80);
  if ((uVar2 & 1) == 0) {
LAB_06b5720c:
    return (ulong)(uVar2 & 1);
  }
  if (param_4 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar10 = *param_4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1e) * 0x10 + 0x138);
          goto LAB_06b57058;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined4 *)0x1e;
    puVar3 = (undefined8 *)func_0x03256b10(param_4);
LAB_06b57058:
    uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
  }
  plVar14 = *(long **)(param_1 + 0x18);
  puVar3 = param_6;
  puVar5 = (undefined8 *)0x0;
  if (param_5 != 0) {
    puVar3 = (undefined8 *)0x0;
    puVar5 = param_6;
  }
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar9 = *param_8;
    lVar10 = *(long *)PTR_DAT_077c16b0;
    uVar1 = *(ushort *)(lVar11 + 0x12e);
    uVar12 = (ulong)uVar1;
    if (param_5 == 0) {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_06b5713c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar14,lVar10,1);
LAB_06b5713c:
      uVar4 = (*(code *)*puVar5)(plVar14,param_3,uVar9,0x20,0,uVar4,puVar5[1]);
    }
    else {
      if (uVar1 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_06b57110;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar14,lVar10,2);
LAB_06b57110:
      uVar4 = (*(code *)*puVar3)(plVar14,param_5,uVar9,puVar3[1]);
      puVar3 = puVar5;
    }
    *puVar3 = uVar4;
    func_0x032809c4(puVar3);
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    func_0x06b98e60(&uStack_a0,*param_6,0,0);
    uVar7 = *(undefined8 *)PTR_DAT_0774f158;
    uVar4 = func_0x06ba3134(*param_6,*(undefined8 *)(param_1 + 0x20),uVar7,uVar7,uVar7,0);
    uVar9 = (undefined4)uVar7;
    *param_7 = uVar4;
    func_0x032809c4(param_7,uVar4);
    lVar10 = param_2[2];
    uVar7 = *param_6;
    puVar6 = (undefined4 *)*param_7;
    uVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe78);
    plVar8 = (long *)0x0;
    func_0x06b9a828(uVar4,uVar7);
    if (lVar10 != 0) {
      func_0x03ec33e4(lVar10,uVar4,*(undefined8 *)PTR_DAT_0782fea8);
      goto LAB_06b5720c;
    }
  }
  auVar15 = func_0x03280cac();
  lVar10 = auVar15._0_8_;
  func_0x057da5fc(lVar10,0);
  *(undefined8 *)(lVar10 + 0x10) = auVar15._8_8_;
  func_0x032809c4((undefined8 *)(lVar10 + 0x10),auVar15._8_8_);
  *(undefined8 *)(lVar10 + 0x18) = puVar6;
  func_0x032809c4((undefined8 *)(lVar10 + 0x18),puVar6);
  *(long *)(lVar10 + 0x20) = (long)plVar8;
  uVar12 = func_0x032809c4((long *)(lVar10 + 0x20),plVar8);
  *(undefined4 *)(lVar10 + 0x28) = uVar9;
  return uVar12;
}

