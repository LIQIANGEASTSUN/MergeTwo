
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0315645c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_031565a0 + 0x3156474);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031565a4 + 0x3156488));
    func_0x01438628(*(undefined4 *)(_UNK_031565a8 + 0x3156494));
    func_0x01438628(*(undefined4 *)(_UNK_031565ac + 0x31564a0));
    func_0x01438628(*(undefined4 *)(_UNK_031565b0 + 0x31564ac));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_031565b4 + 0x31564c0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031565b8 + 0x31564dc));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_031565bc + 0x3156538) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031565c0 + 0x3156554));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03156594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

