
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01883da4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01883ee8 + 0x1883dbc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01883eec + 0x1883dd0));
    func_0x01438628(*(undefined4 *)(_UNK_01883ef0 + 0x1883ddc));
    func_0x01438628(*(undefined4 *)(_UNK_01883ef4 + 0x1883de8));
    func_0x01438628(*(undefined4 *)(_UNK_01883ef8 + 0x1883df4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01883efc + 0x1883e08) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01883f00 + 0x1883e24));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_01883f04 + 0x1883e80) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01883f08 + 0x1883e9c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01883edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

