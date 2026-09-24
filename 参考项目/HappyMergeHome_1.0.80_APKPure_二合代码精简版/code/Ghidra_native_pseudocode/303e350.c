
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304e350(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_0304e538 + 0x304e370);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304e53c + 0x304e384));
    func_0x01438628(*(undefined4 *)(_UNK_0304e540 + 0x304e390));
    func_0x01438628(*(undefined4 *)(_UNK_0304e544 + 0x304e39c));
    func_0x01438628(*(undefined4 *)(_UNK_0304e548 + 0x304e3a8));
    func_0x01438628(*(undefined4 *)(_UNK_0304e54c + 0x304e3b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7425,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0304e550 + 0x304e424) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304e554 + 0x304e440));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_0304e558 + 0x304e468);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_0304e560 + 0x304e4c4);
        goto LAB_0304e518;
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
    puVar8 = *(undefined4 **)(_UNK_0304e55c + 0x304e518);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_0304e518:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7425,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

