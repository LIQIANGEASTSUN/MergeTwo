
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4fbe4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar2 = (char *)(_UNK_02b4fd1c + 0x2b4fbfc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4fd20 + 0x2b4fc10));
    func_0x01438628(*(undefined4 *)(_UNK_02b4fd24 + 0x2b4fc1c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02b4fd28 + 0x2b4fc30) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b4fd2c + 0x2b4fc4c));
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(undefined4 *)(iVar3 + 8);
  uVar6 = *(undefined4 *)(iVar3 + 0xc);
  uVar4 = *(undefined4 *)(iVar3 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar5,uVar6,uVar4,1,0xffffffff,0xffffffff,0);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(iVar1 + 0x5c) = 0;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar3 + 0x18);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02b4fd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

