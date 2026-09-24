
void FUN_02c476d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02c1c2ec(iVar1,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02c4775c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

