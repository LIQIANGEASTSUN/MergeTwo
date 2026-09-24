
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ed69e8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01ed6b2c + 0x1ed6a00);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ed6b30 + 0x1ed6a14));
    func_0x01438628(*(undefined4 *)(_UNK_01ed6b34 + 0x1ed6a20));
    func_0x01438628(*(undefined4 *)(_UNK_01ed6b38 + 0x1ed6a2c));
    func_0x01438628(*(undefined4 *)(_UNK_01ed6b3c + 0x1ed6a38));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01ed6b40 + 0x1ed6a4c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ed6b44 + 0x1ed6a68));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_01ed6b48 + 0x1ed6ac4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01ed6b4c + 0x1ed6ae0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed6b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

