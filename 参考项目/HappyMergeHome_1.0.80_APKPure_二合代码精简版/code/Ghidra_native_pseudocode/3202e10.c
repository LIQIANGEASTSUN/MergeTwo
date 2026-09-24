
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03212e10(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_03212ff8 + 0x3212e30);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03212ffc + 0x3212e44));
    func_0x01438628(*(undefined4 *)(_UNK_03213000 + 0x3212e50));
    func_0x01438628(*(undefined4 *)(_UNK_03213004 + 0x3212e5c));
    func_0x01438628(*(undefined4 *)(_UNK_03213008 + 0x3212e68));
    func_0x01438628(*(undefined4 *)(_UNK_0321300c + 0x3212e74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e95,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03213010 + 0x3212ee4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03213014 + 0x3212f00));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_03213018 + 0x3212f28);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_03213020 + 0x3212f84);
        goto LAB_03212fd8;
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
    puVar8 = *(undefined4 **)(_UNK_0321301c + 0x3212fd8);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_03212fd8:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7e95,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

