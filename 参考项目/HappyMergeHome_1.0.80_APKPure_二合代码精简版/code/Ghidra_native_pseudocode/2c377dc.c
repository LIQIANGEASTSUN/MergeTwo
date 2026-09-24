
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c477dc(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02c4799c + 0x2c477f4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c479a0 + 0x2c47808));
    func_0x01438628(*(undefined4 *)(_UNK_02c479a4 + 0x2c47814));
    func_0x01438628(*(undefined4 *)(_UNK_02c479a8 + 0x2c47820));
    func_0x01438628(*(undefined4 *)(_UNK_02c479ac + 0x2c4782c));
    func_0x01438628(*(undefined4 *)(_UNK_02c479b0 + 0x2c47838));
    func_0x01438628(*(undefined4 *)(_UNK_02c479b4 + 0x2c47844));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c479b8 + 0x2c47858) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar4 = *(undefined4 **)(_UNK_02c479bc + 0x2c47874);
  iVar1 = func_0x014e9518(*puVar4);
  iVar2 = func_0x014e9518(*puVar4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029c9d44(iVar1,uVar5,0xc9,0);
  if (*(int *)(**(int **)(_UNK_02c479c0 + 0x2c478c4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c479c4 + 0x2c478e0));
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&uStack_24,iVar2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uStack_24,uStack_20,uStack_1c,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02c479c8 + 0x2c47958) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c479cc + 0x2c47974));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  return;
}

