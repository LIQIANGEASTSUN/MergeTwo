
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c790c4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02c79380 + 0x2c790dc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c79384 + 0x2c790f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c79388 + 0x2c790fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c7938c + 0x2c79108));
    func_0x01438628(*(undefined4 *)(_UNK_02c79390 + 0x2c79114));
    func_0x01438628(*(undefined4 *)(_UNK_02c79394 + 0x2c79120));
    func_0x01438628(*(undefined4 *)(_UNK_02c79398 + 0x2c7912c));
    func_0x01438628(*(undefined4 *)(_UNK_02c7939c + 0x2c79138));
    func_0x01438628(*(undefined4 *)(_UNK_02c793a0 + 0x2c79144));
    func_0x01438628(*(undefined4 *)(_UNK_02c793a4 + 0x2c79150));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c793a8 + 0x2c79164) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c793ac + 0x2c79180));
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&uStack_2c,iVar4,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uStack_2c,uStack_28,uStack_24,1,0xffffffff,0xffffffff,0);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024eecb8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x035e8140(iVar1,**(undefined4 **)(_UNK_02c793b0 + 0x2c79228));
  if (*(int *)(**(int **)(_UNK_02c793b4 + 0x2c79240) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x024ef144(iVar1,0,0);
  if (iVar4 != 0) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f1368(iVar1,**(undefined4 **)(_UNK_02c793b8 + 0x2c79288),0,0,0);
  }
  if (*(int *)(**(int **)(_UNK_02c793bc + 0x2c792a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c793c0 + 0x2c792c0));
  piVar5 = *(int **)(_UNK_02c793c4 + 0x2c792d4);
  iVar4 = *piVar5;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar5;
  }
  iVar7 = **(int **)(_UNK_02c793c8 + 0x2c792f4);
  iVar2 = *(int *)(iVar7 + 0x1c);
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar2 == 0) {
    func_0x014909d8(iVar7);
    iVar2 = *(int *)(iVar7 + 0x1c);
  }
  iVar4 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x0149097c();
  }
  uVar8 = **(undefined4 **)(iVar4 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar1,uVar6,uVar8,0);
  return;
}

