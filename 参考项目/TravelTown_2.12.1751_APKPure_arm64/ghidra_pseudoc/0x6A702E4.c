/* Ghidra 12.1.2 native pseudocode; RVA 0x6A702E4; Merger.MergeBoard.Systems.ItemUnboxingSystem.UnboxItem; status ok */


/* WARNING: Possible PIC construction at 0x06b70598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7059c) */
/* WARNING: Removing unreachable block (ram,0x06b706cc) */
/* WARNING: Removing unreachable block (ram,0x06b705a0) */
/* WARNING: Removing unreachable block (ram,0x06b70698) */
/* WARNING: Removing unreachable block (ram,0x06b70688) */
/* WARNING: Removing unreachable block (ram,0x06b706a4) */

void Merger_MergeBoard_Systems_ItemUnboxingSystem__UnboxItem
               (undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
               undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e2a6e1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_07831140);
    func_0x03280a18(PTR_DAT_078311b8);
    func_0x03280a18(PTR_DAT_078311c0);
    func_0x03280a18(PTR_DAT_078311c8);
    func_0x03280a18(PTR_DAT_078101d0);
    bRam0000000007e2a6e1 = 1;
  }
  *(undefined1 *)param_4 = 0;
  puVar3 = PTR_DAT_078311c8;
  puVar2 = PTR_DAT_078311b8;
  puVar1 = PTR_DAT_077c0ec8;
  uStack_70 = *(undefined4 *)(param_4 + 2);
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  if (param_3 != 0) {
    uStack_50 = CONCAT44(uStack_50._4_4_,uStack_70);
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    func_0x03d1c7a8(param_3,&uStack_60,*(undefined8 *)PTR_DAT_07831140);
    uStack_98 = param_2[1];
    uStack_a0 = *param_2;
    uStack_88 = param_2[3];
    uStack_90 = param_2[2];
    uStack_60 = uStack_a0;
    uStack_58 = uStack_98;
    uStack_50 = uStack_90;
    uStack_48 = uStack_88;
    func_0x03ec59a8(&uStack_60,param_3,0,*(undefined8 *)puVar3);
    uVar4 = func_0x03d1ae90(param_3,*(undefined8 *)puVar1);
    lVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x06b9ac10(lVar5,0);
    puVar1 = PTR_DAT_078101d0;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = param_3;
      func_0x032809c4((long *)(lVar5 + 0x10),param_3);
      *(undefined8 *)(lVar5 + 0x20) = param_5;
      *(undefined4 *)(lVar5 + 0x18) = uVar4;
      func_0x032809c4((undefined8 *)(lVar5 + 0x20),param_5);
      *(undefined4 *)(lVar5 + 0x38) = param_6;
      uVar6 = func_0x055ea870(param_5,*(undefined8 *)puVar1,0);
      if ((uVar6 & 1) != 0) {
        uStack_b8 = param_2[1];
        uStack_c0 = *param_2;
        uStack_a8 = param_2[3];
        uStack_b0 = param_2[2];
        auVar7 = func_0x06b706d8(uVar6,&uStack_c0,param_6);
        *(undefined8 *)(lVar5 + 0x28) = auVar7._0_8_;
        func_0x032809c4((undefined8 *)(lVar5 + 0x28),auVar7._0_8_);
        *(undefined8 *)(lVar5 + 0x30) = auVar7._8_8_;
        func_0x032809c4((undefined8 *)(lVar5 + 0x30),auVar7._8_8_);
      }
      if (param_2[2] != 0) {
        func_0x03ec33e4(param_2[2],lVar5,*(undefined8 *)PTR_DAT_078311c0);
        return;
      }
    }
  }
  func_0x03280cac();
  puVar1 = PTR_DAT_078311d0;
  if ((bRam0000000007e2a6e0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078311d8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078311e0);
    func_0x03280a18(PTR_DAT_078311e8);
    func_0x03280a18(PTR_DAT_078311f0);
    func_0x03280a18(PTR_DAT_078311f8);
    func_0x03280a18(PTR_DAT_07831200);
    func_0x03280a18(PTR_DAT_078311d0);
    bRam0000000007e2a6e0 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar1);
  return;
}

