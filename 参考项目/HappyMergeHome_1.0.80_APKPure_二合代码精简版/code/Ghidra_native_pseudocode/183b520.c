
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0184b520(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0184b664 + 0x184b538);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0184b668 + 0x184b54c));
    func_0x01438628(*(undefined4 *)(_UNK_0184b66c + 0x184b558));
    func_0x01438628(*(undefined4 *)(_UNK_0184b670 + 0x184b564));
    func_0x01438628(*(undefined4 *)(_UNK_0184b674 + 0x184b570));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0184b678 + 0x184b584) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184b67c + 0x184b5a0));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0184b680 + 0x184b5fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0184b684 + 0x184b618));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0184b658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

