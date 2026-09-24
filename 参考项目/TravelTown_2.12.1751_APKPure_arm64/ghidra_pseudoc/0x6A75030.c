/* Ghidra 12.1.2 native pseudocode; RVA 0x6A75030; Merger.MergeBoard.Systems.SpawnerSystem.SpawnItem; status ok */

void Merger_MergeBoard_Systems_SpawnerSystem__SpawnItem
               (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,long *param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000007e2a6fb & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_0777e550);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6fb = 1;
  }
  if ((param_7 != (long *)0x0) && (plVar7 = (long *)param_7[2], plVar7 != (long *)0x0)) {
    plVar17 = *(long **)(param_1 + 0x10);
    uVar8 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    puVar4 = PTR_DAT_0777e550;
    if (plVar17 != (long *)0x0) {
      lVar13 = *plVar17;
      lVar16 = param_7[4];
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto LAB_06b7515c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_077c16b0,1);
LAB_06b7515c:
      puVar3 = PTR_DAT_0774f158;
      uVar8 = (*(code *)*puVar9)(plVar17,uVar8,param_6,4,(char)lVar16 != '\0',0,puVar9[1]);
      uStack_78 = param_2[1];
      uStack_80 = *param_2;
      uStack_68 = param_2[3];
      uStack_70 = param_2[2];
      func_0x06b98e60(&uStack_80,uVar8,param_3,0);
      func_0x06b4f57c(param_5,param_3,0);
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      plVar7 = (long *)0x0;
      if ((bVar1 <= *(byte *)(*param_7 + 0x130)) &&
         (plVar7 = param_7,
         *(long *)(*(long *)(*param_7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
        plVar7 = (long *)0x0;
      }
      uVar11 = *(undefined8 *)puVar3;
      uVar11 = func_0x06ba3134(uVar8,*(undefined8 *)(param_1 + 0x20),uVar11,uVar11,uVar11,0);
      uVar12 = *(undefined8 *)puVar3;
      lVar16 = param_2[2];
      uVar12 = func_0x06ba3134(param_3,*(undefined8 *)(param_1 + 0x20),uVar12,uVar12,uVar12,0);
      if (plVar7 == (long *)0x0) {
        bVar5 = false;
        bVar6 = false;
      }
      else {
        bVar5 = *(char *)((long)plVar7 + 0x29) != '\0';
        bVar6 = (char)plVar7[5] != '\0';
      }
      uVar2 = *(undefined1 *)((long)param_7 + 0x22);
      uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe80);
      func_0x06b9aa90(uVar10,param_3,uVar8,param_4,param_6,1,uVar12,uVar11,bVar6,bVar5,uVar2,0);
      puVar4 = PTR_DAT_0782fe78;
      if (lVar16 != 0) {
        func_0x03ec33e4(lVar16,uVar10,*(undefined8 *)PTR_DAT_0782feb0);
        lVar16 = param_2[2];
        uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x06b9a828(uVar12,uVar8,uVar11,0);
        if (lVar16 != 0) {
          func_0x03ec33e4(lVar16,uVar12,*(undefined8 *)PTR_DAT_0782fea8);
          return;
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

