
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03054f10(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_03055054 + 0x3054f28);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03055058 + 0x3054f3c));
    func_0x01438628(*(undefined4 *)(_UNK_0305505c + 0x3054f48));
    func_0x01438628(*(undefined4 *)(_UNK_03055060 + 0x3054f54));
    func_0x01438628(*(undefined4 *)(_UNK_03055064 + 0x3054f60));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03055068 + 0x3054f74) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0305506c + 0x3054f90));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_03055070 + 0x3054fec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03055074 + 0x3055008));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03055048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

