
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03188474(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_0318865c + 0x3188494);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03188660 + 0x31884a8));
    func_0x01438628(*(undefined4 *)(_UNK_03188664 + 0x31884b4));
    func_0x01438628(*(undefined4 *)(_UNK_03188668 + 0x31884c0));
    func_0x01438628(*(undefined4 *)(_UNK_0318866c + 0x31884cc));
    func_0x01438628(*(undefined4 *)(_UNK_03188670 + 0x31884d8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7ba8,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03188674 + 0x3188548) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03188678 + 0x3188564));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_0318867c + 0x318858c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_03188684 + 0x31885e8);
        goto LAB_0318863c;
      }
      iVar2 = func_0x04cfd760(iVar1,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 8) == param_3) break;
      iVar7 = iVar7 + 1;
    }
    iVar2 = func_0x04cfd760(iVar1,iVar7,*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    iVar1 = func_0x04cfd760(iVar1,iVar7,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_03188680 + 0x318863c);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_0318863c:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7ba8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

