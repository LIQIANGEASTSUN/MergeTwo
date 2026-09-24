
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa7260(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02fa73a4 + 0x2fa7278);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa73a8 + 0x2fa728c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa73ac + 0x2fa7298));
    func_0x01438628(*(undefined4 *)(_UNK_02fa73b0 + 0x2fa72a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa73b4 + 0x2fa72b0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02fa73b8 + 0x2fa72c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa73bc + 0x2fa72e0));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02fa73c0 + 0x2fa733c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa73c4 + 0x2fa7358));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02fa7398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

