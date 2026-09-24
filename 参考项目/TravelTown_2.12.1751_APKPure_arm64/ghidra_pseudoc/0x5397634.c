/* Ghidra 12.1.2 native pseudocode; RVA 0x5397634; MergeEngine.ECS.Systems.State.Board.ItemsStateSystemBase<object>.TryGetEntity; status ok */

/* WARNING: Possible PIC construction at 0x054976b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x054976bc) */
/* WARNING: Removing unreachable block (ram,0x054976d4) */
/* WARNING: Removing unreachable block (ram,0x0549771c) */
/* WARNING: Removing unreachable block (ram,0x05497724) */
/* WARNING: Removing unreachable block (ram,0x0549773c) */
/* WARNING: Removing unreachable block (ram,0x05497744) */
/* WARNING: Removing unreachable block (ram,0x0549776c) */
/* WARNING: Removing unreachable block (ram,0x05497750) */
/* WARNING: Removing unreachable block (ram,0x0549775c) */
/* WARNING: Removing unreachable block (ram,0x0549777c) */
/* WARNING: Removing unreachable block (ram,0x054976e0) */
/* WARNING: Removing unreachable block (ram,0x05497708) */
/* WARNING: Removing unreachable block (ram,0x0549778c) */
/* WARNING: Removing unreachable block (ram,0x05497794) */
/* WARNING: Removing unreachable block (ram,0x0549779c) */
/* WARNING: Removing unreachable block (ram,0x054977b4) */
/* WARNING: Removing unreachable block (ram,0x054977bc) */
/* WARNING: Removing unreachable block (ram,0x054977e4) */
/* WARNING: Removing unreachable block (ram,0x054977c8) */
/* WARNING: Removing unreachable block (ram,0x054977d4) */
/* WARNING: Removing unreachable block (ram,0x054977f0) */
/* WARNING: Removing unreachable block (ram,0x054976c4) */
/* WARNING: Removing unreachable block (ram,0x054976cc) */
/* WARNING: Removing unreachable block (ram,0x05497808) */

ulong MergeEngine_ECS_Systems_State_Board_ItemsStateSystemBase_object___TryGetEntity
                (undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long param_5,
                long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long lVar6;
  long lStack_48;
  
  lVar6 = param_3;
  if ((bRam0000000007e1c3cb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782dd8);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e1c3cb = 1;
  }
  lStack_48 = 0;
  if (param_3 == 0) {
    func_0x03280cac();
    param_2 = extraout_x1;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x18);
    param_4 = &lStack_48;
    param_5 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x40);
  }
  if ((bRam0000000007e1c3cc & 1) == 0) {
    func_0x03280a18(PTR_DAT_07782de0);
    func_0x03280a18(PTR_DAT_07782de8);
    bRam0000000007e1c3cc = 1;
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48) + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar3 = func_0x03280ca0();
  func_0x04034ff4(lVar3,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
  puVar2 = PTR_DAT_07782de8;
  puVar1 = PTR_DAT_07782de0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = lVar6;
    func_0x032809c4((long *)(lVar3 + 0x10),lVar6);
    uVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x05355fbc(uVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x58),
                    0);
    lVar6 = func_0x03d45130(param_2,uVar4,*(undefined8 *)puVar1);
    *param_4 = lVar6;
    func_0x032809c4(param_4,lVar6);
    return (ulong)(*param_4 != 0);
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

