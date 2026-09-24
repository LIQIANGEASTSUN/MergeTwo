
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f563f4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02f56538 + 0x2f5640c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f5653c + 0x2f56420));
    func_0x01438628(*(undefined4 *)(_UNK_02f56540 + 0x2f5642c));
    func_0x01438628(*(undefined4 *)(_UNK_02f56544 + 0x2f56438));
    func_0x01438628(*(undefined4 *)(_UNK_02f56548 + 0x2f56444));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02f5654c + 0x2f56458) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f56550 + 0x2f56474));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02f56554 + 0x2f564d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f56558 + 0x2f564ec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f5652c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

