
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016fad2c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_016fae70 + 0x16fad44);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016fae74 + 0x16fad58));
    func_0x01438628(*(undefined4 *)(_UNK_016fae78 + 0x16fad64));
    func_0x01438628(*(undefined4 *)(_UNK_016fae7c + 0x16fad70));
    func_0x01438628(*(undefined4 *)(_UNK_016fae80 + 0x16fad7c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_016fae84 + 0x16fad90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016fae88 + 0x16fadac));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_016fae8c + 0x16fae08) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016fae90 + 0x16fae24));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x016fae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

