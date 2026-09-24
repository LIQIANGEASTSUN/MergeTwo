
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c87f4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_031c8938 + 0x31c880c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c893c + 0x31c8820));
    func_0x01438628(*(undefined4 *)(_UNK_031c8940 + 0x31c882c));
    func_0x01438628(*(undefined4 *)(_UNK_031c8944 + 0x31c8838));
    func_0x01438628(*(undefined4 *)(_UNK_031c8948 + 0x31c8844));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_031c894c + 0x31c8858) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c8950 + 0x31c8874));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_031c8954 + 0x31c88d0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c8958 + 0x31c88ec));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x031c892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

