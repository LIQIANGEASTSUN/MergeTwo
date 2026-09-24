
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03218f70(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_032190b4 + 0x3218f88);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032190b8 + 0x3218f9c));
    func_0x01438628(*(undefined4 *)(_UNK_032190bc + 0x3218fa8));
    func_0x01438628(*(undefined4 *)(_UNK_032190c0 + 0x3218fb4));
    func_0x01438628(*(undefined4 *)(_UNK_032190c4 + 0x3218fc0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032190c8 + 0x3218fd4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032190cc + 0x3218ff0));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_032190d0 + 0x321904c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032190d4 + 0x3219068));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032190a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

