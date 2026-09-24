
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0177af6c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0177b0b0 + 0x177af84);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0177b0b4 + 0x177af98));
    func_0x01438628(*(undefined4 *)(_UNK_0177b0b8 + 0x177afa4));
    func_0x01438628(*(undefined4 *)(_UNK_0177b0bc + 0x177afb0));
    func_0x01438628(*(undefined4 *)(_UNK_0177b0c0 + 0x177afbc));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0177b0c4 + 0x177afd0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0177b0c8 + 0x177afec));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0177b0cc + 0x177b048) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0177b0d0 + 0x177b064));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0177b0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

