/* Ghidra 12.1.2 native pseudocode; RVA 0x6788A80; MergeEngine.ECS.Systems.Board.UnboxingSystem.FireLiveOpsZoneUnboxedIfNeeded; status ok */


/* WARNING: Possible PIC construction at 0x06888b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06888b2c) */
/* WARNING: Removing unreachable block (ram,0x06888b34) */
/* WARNING: Removing unreachable block (ram,0x06888b4c) */
/* WARNING: Removing unreachable block (ram,0x06888bcc) */

ulong MergeEngine_ECS_Systems_Board_UnboxingSystem__FireLiveOpsZoneUnboxedIfNeeded
                (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000007e28d26 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_078101c0);
    func_0x03280a18(PTR_DAT_078101c8);
    bRam0000000007e28d26 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar4 = func_0x06603648(*(long *)(param_1 + 0x78),0);
    if (lVar4 == 0) {
      return 0;
    }
    if (param_2 != 0) {
      func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d75b8);
      goto SUB_06888c0c;
    }
  }
  param_2 = func_0x03280cac();
SUB_06888c0c:
  if ((bRam0000000007e28d27 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d27 = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x38);
    if (0 < iVar1) {
      iVar2 = *(int *)(param_2 + 0x3c);
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar3 = iVar1 - iVar2;
      if ((int)uVar3 < 1) {
        uVar3 = 0;
      }
      return (ulong)uVar3;
    }
    return 0;
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

