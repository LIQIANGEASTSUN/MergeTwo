
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a0277c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02a028c0 + 0x2a02794);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a028c4 + 0x2a027a8));
    func_0x01438628(*(undefined4 *)(_UNK_02a028c8 + 0x2a027b4));
    func_0x01438628(*(undefined4 *)(_UNK_02a028cc + 0x2a027c0));
    func_0x01438628(*(undefined4 *)(_UNK_02a028d0 + 0x2a027cc));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02a028d4 + 0x2a027e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a028d8 + 0x2a027fc));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02a028dc + 0x2a02858) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a028e0 + 0x2a02874));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a028b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

