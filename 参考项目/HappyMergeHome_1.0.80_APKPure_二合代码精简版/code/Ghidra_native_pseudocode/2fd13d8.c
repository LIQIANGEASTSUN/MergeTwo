
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe13d8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02fe151c + 0x2fe13f0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fe1520 + 0x2fe1404));
    func_0x01438628(*(undefined4 *)(_UNK_02fe1524 + 0x2fe1410));
    func_0x01438628(*(undefined4 *)(_UNK_02fe1528 + 0x2fe141c));
    func_0x01438628(*(undefined4 *)(_UNK_02fe152c + 0x2fe1428));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02fe1530 + 0x2fe143c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe1534 + 0x2fe1458));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02fe1538 + 0x2fe14b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fe153c + 0x2fe14d0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02fe1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

