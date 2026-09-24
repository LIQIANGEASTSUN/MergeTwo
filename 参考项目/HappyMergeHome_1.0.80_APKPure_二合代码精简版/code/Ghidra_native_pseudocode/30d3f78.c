
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e3f78(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_030e40bc + 0x30e3f90);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030e40c0 + 0x30e3fa4));
    func_0x01438628(*(undefined4 *)(_UNK_030e40c4 + 0x30e3fb0));
    func_0x01438628(*(undefined4 *)(_UNK_030e40c8 + 0x30e3fbc));
    func_0x01438628(*(undefined4 *)(_UNK_030e40cc + 0x30e3fc8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_030e40d0 + 0x30e3fdc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030e40d4 + 0x30e3ff8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_030e40d8 + 0x30e4054) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030e40dc + 0x30e4070));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x030e40b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

