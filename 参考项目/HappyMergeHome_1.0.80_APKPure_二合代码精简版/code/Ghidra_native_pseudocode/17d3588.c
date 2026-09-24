
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e3588(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_017e36cc + 0x17e35a0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e36d0 + 0x17e35b4));
    func_0x01438628(*(undefined4 *)(_UNK_017e36d4 + 0x17e35c0));
    func_0x01438628(*(undefined4 *)(_UNK_017e36d8 + 0x17e35cc));
    func_0x01438628(*(undefined4 *)(_UNK_017e36dc + 0x17e35d8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017e36e0 + 0x17e35ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017e36e4 + 0x17e3608));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_017e36e8 + 0x17e3664) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017e36ec + 0x17e3680));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017e36c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

