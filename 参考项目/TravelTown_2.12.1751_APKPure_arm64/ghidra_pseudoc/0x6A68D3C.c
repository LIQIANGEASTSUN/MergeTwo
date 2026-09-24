/* Ghidra 12.1.2 native pseudocode; RVA 0x6A68D3C; Merger.MergeBoard.Systems.FeedingCombinationFeedSystem.FeedItem; status ok */


void Merger_MergeBoard_Systems_FeedingCombinationFeedSystem__FeedItem
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [224];
  undefined1 auStack_120 [224];
  
  if ((bRam0000000007e2a6b4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830d90);
    func_0x03280a18(PTR_DAT_07830d98);
    func_0x03280a18(PTR_DAT_07830da0);
    func_0x03280a18(PTR_DAT_07830da8);
    func_0x03280a18(PTR_DAT_07830db0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6b4 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar11 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07830d98) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b68e1c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07830d98,0);
LAB_06b68e1c:
    uVar11 = (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
    lVar5 = param_2[2];
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)PTR_DAT_07830da0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      puVar3 = PTR_DAT_07830db0;
      puVar2 = PTR_DAT_07830d90;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar5,uVar11,
                          *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        func_0x072ce970(auStack_200,param_2,0xe0);
        uVar11 = *(undefined8 *)puVar3;
        func_0x072ce970(auStack_120,auStack_200,0xe0);
        func_0x03ec74f4(auStack_120,uVar11);
        uStack_218 = param_4[1];
        uStack_220 = *param_4;
        uStack_208 = param_4[3];
        uStack_210 = param_4[2];
        func_0x06b98f6c(&uStack_220,*param_3,0);
        lVar7 = param_4[2];
        lVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
        func_0x06b9a5d8(lVar5,0);
        puVar2 = PTR_DAT_0774f158;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x10) = *param_2;
          func_0x032809c4();
          *(undefined8 *)(lVar5 + 0x18) = *param_3;
          func_0x032809c4();
          uVar11 = *(undefined8 *)puVar2;
          uVar11 = func_0x06ba3134(*param_2,*(undefined8 *)(param_1 + 0x30),uVar11,uVar11,uVar11,0);
          *(undefined8 *)(lVar5 + 0x20) = uVar11;
          func_0x032809c4();
          if (lVar7 != 0) {
            func_0x03ec33e4(lVar7,lVar5,*(undefined8 *)PTR_DAT_07830da8);
            return;
          }
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

