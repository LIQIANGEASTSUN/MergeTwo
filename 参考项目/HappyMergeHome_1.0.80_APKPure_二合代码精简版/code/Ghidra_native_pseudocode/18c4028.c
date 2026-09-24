
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d4028(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_018d416c + 0x18d4040);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d4170 + 0x18d4054));
    func_0x01438628(*(undefined4 *)(_UNK_018d4174 + 0x18d4060));
    func_0x01438628(*(undefined4 *)(_UNK_018d4178 + 0x18d406c));
    func_0x01438628(*(undefined4 *)(_UNK_018d417c + 0x18d4078));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018d4180 + 0x18d408c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018d4184 + 0x18d40a8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_018d4188 + 0x18d4104) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018d418c + 0x18d4120));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018d4160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

