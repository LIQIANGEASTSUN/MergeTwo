
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c79dc(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_016c7b20 + 0x16c79f4);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c7b24 + 0x16c7a08));
    func_0x01438628(*(undefined4 *)(_UNK_016c7b28 + 0x16c7a14));
    func_0x01438628(*(undefined4 *)(_UNK_016c7b2c + 0x16c7a20));
    func_0x01438628(*(undefined4 *)(_UNK_016c7b30 + 0x16c7a2c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_016c7b34 + 0x16c7a40) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c7b38 + 0x16c7a5c));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_016c7b3c + 0x16c7ab8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c7b40 + 0x16c7ad4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x016c7b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

