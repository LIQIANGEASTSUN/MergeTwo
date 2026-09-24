
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0311ca88(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0311cbcc + 0x311caa0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311cbd0 + 0x311cab4));
    func_0x01438628(*(undefined4 *)(_UNK_0311cbd4 + 0x311cac0));
    func_0x01438628(*(undefined4 *)(_UNK_0311cbd8 + 0x311cacc));
    func_0x01438628(*(undefined4 *)(_UNK_0311cbdc + 0x311cad8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0311cbe0 + 0x311caec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0311cbe4 + 0x311cb08));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0311cbe8 + 0x311cb64) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0311cbec + 0x311cb80));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0311cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

