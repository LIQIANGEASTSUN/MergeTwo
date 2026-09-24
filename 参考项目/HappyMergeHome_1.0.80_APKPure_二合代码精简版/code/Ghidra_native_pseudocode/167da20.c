
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168da20(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0168db64 + 0x168da38);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168db68 + 0x168da4c));
    func_0x01438628(*(undefined4 *)(_UNK_0168db6c + 0x168da58));
    func_0x01438628(*(undefined4 *)(_UNK_0168db70 + 0x168da64));
    func_0x01438628(*(undefined4 *)(_UNK_0168db74 + 0x168da70));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0168db78 + 0x168da84) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0168db7c + 0x168daa0));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0168db80 + 0x168dafc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0168db84 + 0x168db18));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0168db58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

