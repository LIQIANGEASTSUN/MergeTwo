
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0301af54(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0301b098 + 0x301af6c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0301b09c + 0x301af80));
    func_0x01438628(*(undefined4 *)(_UNK_0301b0a0 + 0x301af8c));
    func_0x01438628(*(undefined4 *)(_UNK_0301b0a4 + 0x301af98));
    func_0x01438628(*(undefined4 *)(_UNK_0301b0a8 + 0x301afa4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0301b0ac + 0x301afb8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0301b0b0 + 0x301afd4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0301b0b4 + 0x301b030) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0301b0b8 + 0x301b04c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0301b08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

