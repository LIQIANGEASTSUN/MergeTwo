/* Ghidra 12.1.2 native pseudocode; RVA 0x6A65460; Merger.MergeBoard.Systems.ChargeableSystem.Tick; status ok */


void Merger_MergeBoard_Systems_ChargeableSystem__Tick(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_188;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  puVar5 = PTR_DAT_07830a38;
  puVar4 = PTR_DAT_07830a30;
  puVar3 = PTR_DAT_07830a28;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a69d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830a40);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830a28);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07830a38);
    func_0x03280a18(PTR_DAT_07830a30);
    func_0x03280a18(PTR_DAT_07830a48);
    func_0x03280a18(PTR_DAT_07830a50);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a69d = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x072ce9a0(&uStack_188,0,0x88);
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  uVar6 = func_0x03d1abe8(*(undefined8 *)puVar3);
  uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015d08(uVar7,0,*(undefined8 *)puVar1,0);
  uStack_e0 = uVar11;
  uStack_d8 = uVar12;
  uStack_d0 = uVar13;
  uStack_c8 = uVar14;
  func_0x03e66544(&uStack_100,&uStack_e0,uVar6,uVar7,*(undefined8 *)puVar4);
  uVar8 = func_0x04497044(&uStack_100,&uStack_188,*(undefined8 *)puVar5);
  if (((uVar8 & 1) != 0) && (iStack_178 != 1)) {
    if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    iStack_17c = func_0x05797580(iStack_17c + 1,iStack_180 + -1,0);
    uVar6 = *(undefined8 *)PTR_DAT_07830a50;
    func_0x072ce970(&uStack_e0,&uStack_188,0x88);
    func_0x03ec6f48(&uStack_e0,uVar6);
    uVar6 = *(undefined8 *)PTR_DAT_0774f158;
    uVar6 = func_0x06ba3134(uStack_188,*(undefined8 *)(param_1 + 0x18),uVar6,uVar6,uVar6,0);
    lVar10 = param_2[2];
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830a40);
    func_0x06b9a2a8(lVar9,0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
      func_0x032809c4((undefined8 *)(lVar9 + 0x10),uVar6);
      if (lVar10 != 0) {
        func_0x03ec33e4(lVar10,lVar9,*(undefined8 *)PTR_DAT_07830a48);
        return;
      }
    }
    func_0x03280cac();
    return;
  }
  return;
}

