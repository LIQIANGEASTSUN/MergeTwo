
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0331af38(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0331b07c + 0x331af50);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0331b080 + 0x331af64));
    func_0x01438628(*(undefined4 *)(_UNK_0331b084 + 0x331af70));
    func_0x01438628(*(undefined4 *)(_UNK_0331b088 + 0x331af7c));
    func_0x01438628(*(undefined4 *)(_UNK_0331b08c + 0x331af88));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0331b090 + 0x331af9c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0331b094 + 0x331afb8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0331b098 + 0x331b014) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0331b09c + 0x331b030));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0331b070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

