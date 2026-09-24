
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9f25c(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_02f9f444 + 0x2f9f27c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9f448 + 0x2f9f290));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f44c + 0x2f9f29c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f450 + 0x2f9f2a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f454 + 0x2f9f2b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9f458 + 0x2f9f2c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f8f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f9f45c + 0x2f9f330) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9f460 + 0x2f9f34c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_02f9f464 + 0x2f9f374);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_02f9f46c + 0x2f9f3d0);
        goto LAB_02f9f424;
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
    puVar8 = *(undefined4 **)(_UNK_02f9f468 + 0x2f9f424);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_02f9f424:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x6f8f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

