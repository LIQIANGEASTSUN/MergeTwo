
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03090b00(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_03090c44 + 0x3090b18);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03090c48 + 0x3090b2c));
    func_0x01438628(*(undefined4 *)(_UNK_03090c4c + 0x3090b38));
    func_0x01438628(*(undefined4 *)(_UNK_03090c50 + 0x3090b44));
    func_0x01438628(*(undefined4 *)(_UNK_03090c54 + 0x3090b50));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03090c58 + 0x3090b64) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03090c5c + 0x3090b80));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_03090c60 + 0x3090bdc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03090c64 + 0x3090bf8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03090c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

