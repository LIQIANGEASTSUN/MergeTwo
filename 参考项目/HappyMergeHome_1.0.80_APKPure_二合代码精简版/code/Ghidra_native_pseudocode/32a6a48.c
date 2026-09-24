
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b6a48(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_032b6b8c + 0x32b6a60);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b6b90 + 0x32b6a74));
    func_0x01438628(*(undefined4 *)(_UNK_032b6b94 + 0x32b6a80));
    func_0x01438628(*(undefined4 *)(_UNK_032b6b98 + 0x32b6a8c));
    func_0x01438628(*(undefined4 *)(_UNK_032b6b9c + 0x32b6a98));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032b6ba0 + 0x32b6aac) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b6ba4 + 0x32b6ac8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_032b6ba8 + 0x32b6b24) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032b6bac + 0x32b6b40));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032b6b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

