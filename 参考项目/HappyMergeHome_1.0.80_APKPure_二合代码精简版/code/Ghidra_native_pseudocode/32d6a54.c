
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032e6a54(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_032e6b98 + 0x32e6a6c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e6b9c + 0x32e6a80));
    func_0x01438628(*(undefined4 *)(_UNK_032e6ba0 + 0x32e6a8c));
    func_0x01438628(*(undefined4 *)(_UNK_032e6ba4 + 0x32e6a98));
    func_0x01438628(*(undefined4 *)(_UNK_032e6ba8 + 0x32e6aa4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032e6bac + 0x32e6ab8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e6bb0 + 0x32e6ad4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_032e6bb4 + 0x32e6b30) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032e6bb8 + 0x32e6b4c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032e6b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

