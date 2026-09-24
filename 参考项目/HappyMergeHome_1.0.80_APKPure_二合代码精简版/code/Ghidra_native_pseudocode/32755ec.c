
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032855ec(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_03285730 + 0x3285604);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03285734 + 0x3285618));
    func_0x01438628(*(undefined4 *)(_UNK_03285738 + 0x3285624));
    func_0x01438628(*(undefined4 *)(_UNK_0328573c + 0x3285630));
    func_0x01438628(*(undefined4 *)(_UNK_03285740 + 0x328563c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03285744 + 0x3285650) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03285748 + 0x328566c));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0328574c + 0x32856c8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03285750 + 0x32856e4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03285724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

