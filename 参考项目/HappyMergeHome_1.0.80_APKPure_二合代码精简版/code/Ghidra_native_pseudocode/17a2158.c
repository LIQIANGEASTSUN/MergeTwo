
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017b2158(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_017b229c + 0x17b2170);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017b22a0 + 0x17b2184));
    func_0x01438628(*(undefined4 *)(_UNK_017b22a4 + 0x17b2190));
    func_0x01438628(*(undefined4 *)(_UNK_017b22a8 + 0x17b219c));
    func_0x01438628(*(undefined4 *)(_UNK_017b22ac + 0x17b21a8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017b22b0 + 0x17b21bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017b22b4 + 0x17b21d8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_017b22b8 + 0x17b2234) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017b22bc + 0x17b2250));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017b2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

