/* Ghidra 12.1.2 native pseudocode; RVA 0x666CD78; MergeEngine.ECS.Systems.Board.InteractionTrackingSystem.TryToSendEvent; status ok */


/* WARNING: Possible PIC construction at 0x0676ce40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a016b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a016e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a01a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a0173c) */
/* WARNING: Removing unreachable block (ram,0x06a0170c) */
/* WARNING: Removing unreachable block (ram,0x06a01714) */
/* WARNING: Removing unreachable block (ram,0x06a016e4) */
/* WARNING: Removing unreachable block (ram,0x06a016ec) */
/* WARNING: Removing unreachable block (ram,0x06a01700) */
/* WARNING: Removing unreachable block (ram,0x06a016bc) */
/* WARNING: Removing unreachable block (ram,0x06a016c4) */
/* WARNING: Removing unreachable block (ram,0x06a016d8) */
/* WARNING: Removing unreachable block (ram,0x06a01698) */
/* WARNING: Removing unreachable block (ram,0x06a01754) */
/* WARNING: Removing unreachable block (ram,0x06a01774) */
/* WARNING: Removing unreachable block (ram,0x06a01788) */
/* WARNING: Removing unreachable block (ram,0x06a0178c) */
/* WARNING: Removing unreachable block (ram,0x06a01794) */
/* WARNING: Removing unreachable block (ram,0x06a017a4) */
/* WARNING: Removing unreachable block (ram,0x06a017c0) */
/* WARNING: Removing unreachable block (ram,0x06a017c8) */
/* WARNING: Removing unreachable block (ram,0x06a017f0) */
/* WARNING: Removing unreachable block (ram,0x06a017d4) */
/* WARNING: Removing unreachable block (ram,0x06a017e0) */
/* WARNING: Removing unreachable block (ram,0x06a01800) */
/* WARNING: Removing unreachable block (ram,0x06a01888) */
/* WARNING: Removing unreachable block (ram,0x06a018ac) */
/* WARNING: Removing unreachable block (ram,0x06a018d8) */
/* WARNING: Removing unreachable block (ram,0x06a0193c) */
/* WARNING: Removing unreachable block (ram,0x06a0195c) */
/* WARNING: Removing unreachable block (ram,0x06a01970) */
/* WARNING: Removing unreachable block (ram,0x06a01974) */
/* WARNING: Removing unreachable block (ram,0x06a0197c) */
/* WARNING: Removing unreachable block (ram,0x06a01a0c) */
/* WARNING: Removing unreachable block (ram,0x06a01a2c) */
/* WARNING: Removing unreachable block (ram,0x06a01a40) */
/* WARNING: Removing unreachable block (ram,0x06a01990) */
/* WARNING: Removing unreachable block (ram,0x06a019ac) */
/* WARNING: Removing unreachable block (ram,0x06a019b4) */
/* WARNING: Removing unreachable block (ram,0x06a019dc) */
/* WARNING: Removing unreachable block (ram,0x06a019c0) */
/* WARNING: Removing unreachable block (ram,0x06a019cc) */
/* WARNING: Removing unreachable block (ram,0x06a019e8) */
/* WARNING: Removing unreachable block (ram,0x055ea870) */
/* WARNING: Removing unreachable block (ram,0x055f6d18) */
/* WARNING: Removing unreachable block (ram,0x055f6d50) */
/* WARNING: Removing unreachable block (ram,0x055f6d20) */
/* WARNING: Removing unreachable block (ram,0x055f6d28) */
/* WARNING: Removing unreachable block (ram,0x055f6d2c) */
/* WARNING: Removing unreachable block (ram,0x055f6d58) */
/* WARNING: Removing unreachable block (ram,0x055f6d5c) */
/* WARNING: Removing unreachable block (ram,0x055f6d3c) */
/* WARNING: Removing unreachable block (ram,0x057aa5e0) */
/* WARNING: Removing unreachable block (ram,0x057aa5f8) */
/* WARNING: Removing unreachable block (ram,0x057aa698) */
/* WARNING: Removing unreachable block (ram,0x057aa70c) */
/* WARNING: Removing unreachable block (ram,0x057aa6bc) */
/* WARNING: Removing unreachable block (ram,0x057aa6d0) */
/* WARNING: Removing unreachable block (ram,0x057aa708) */
/* WARNING: Removing unreachable block (ram,0x057aa634) */
/* WARNING: Removing unreachable block (ram,0x057aa648) */
/* WARNING: Removing unreachable block (ram,0x057aa728) */
/* WARNING: Removing unreachable block (ram,0x057f2848) */
/* WARNING: Removing unreachable block (ram,0x057aa668) */
/* WARNING: Removing unreachable block (ram,0x057aa748) */
/* WARNING: Removing unreachable block (ram,0x057aa710) */
/* WARNING: Removing unreachable block (ram,0x057aa67c) */
/* WARNING: Removing unreachable block (ram,0x06a018dc) */
/* WARNING: Removing unreachable block (ram,0x06a01814) */
/* WARNING: Removing unreachable block (ram,0x06a01828) */
/* WARNING: Removing unreachable block (ram,0x06a01830) */
/* WARNING: Removing unreachable block (ram,0x06a01858) */
/* WARNING: Removing unreachable block (ram,0x06a0183c) */
/* WARNING: Removing unreachable block (ram,0x06a01848) */
/* WARNING: Removing unreachable block (ram,0x06a01868) */
/* WARNING: Removing unreachable block (ram,0x06a016b0) */
/* WARNING: Removing unreachable block (ram,0x0676ce44) */
/* WARNING: Removing unreachable block (ram,0x0676ce4c) */
/* WARNING: Removing unreachable block (ram,0x0676ce78) */
/* WARNING: Removing unreachable block (ram,0x0676ce98) */
/* WARNING: Removing unreachable block (ram,0x06a0165c) */
/* WARNING: Removing unreachable block (ram,0x06a01674) */
/* WARNING: Removing unreachable block (ram,0x06a01688) */
/* WARNING: Removing unreachable block (ram,0x06a01a54) */

undefined1  [16]
MergeEngine_ECS_Systems_Board_InteractionTrackingSystem__TryToSendEvent(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar5 = PTR_DAT_07808040;
  puVar4 = PTR_DAT_07808038;
  if ((bRam0000000007e280fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808038);
    func_0x03280a18(PTR_DAT_07808048);
    func_0x03280a18(PTR_DAT_07808040);
    func_0x03280a18(PTR_DAT_07808050);
    bRam0000000007e280fd = 1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0535d618(uVar6,uVar7,*(undefined8 *)puVar5,0);
  if (lVar8 != 0) {
    auVar11 = func_0x06a0067c(lVar8,uVar6,0);
    if ((auVar11._0_8_ & 1) == 0) {
      return auVar11;
    }
    if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
      uVar7 = func_0x062b2220(*(long *)(param_1 + 0x48),0);
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(lVar8 + 0x78);
        *puVar9 = uVar7;
        if (iRam00000000080486b8 != 0) {
          puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = puVar9;
        return auVar10;
      }
    }
  }
  auVar11._0_8_ = func_0x03280cac();
  puVar4 = PTR_DAT_07808058;
  if ((bRam0000000007e280fe & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808058);
    bRam0000000007e280fe = 1;
  }
  uVar7 = *(undefined8 *)puVar4;
  auVar11._8_8_ = 0;
  return auVar11;
}

