
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01811a24(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01811b68 + 0x1811a3c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01811b6c + 0x1811a50));
    func_0x01438628(*(undefined4 *)(_UNK_01811b70 + 0x1811a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01811b74 + 0x1811a68));
    func_0x01438628(*(undefined4 *)(_UNK_01811b78 + 0x1811a74));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01811b7c + 0x1811a88) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01811b80 + 0x1811aa4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_01811b84 + 0x1811b00) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01811b88 + 0x1811b1c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01811b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

