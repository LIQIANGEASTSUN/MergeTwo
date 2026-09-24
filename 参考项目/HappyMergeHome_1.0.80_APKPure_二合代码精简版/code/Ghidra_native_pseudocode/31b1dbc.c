
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031c1dbc(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_031c1fa4 + 0x31c1ddc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c1fa8 + 0x31c1df0));
    func_0x01438628(*(undefined4 *)(_UNK_031c1fac + 0x31c1dfc));
    func_0x01438628(*(undefined4 *)(_UNK_031c1fb0 + 0x31c1e08));
    func_0x01438628(*(undefined4 *)(_UNK_031c1fb4 + 0x31c1e14));
    func_0x01438628(*(undefined4 *)(_UNK_031c1fb8 + 0x31c1e20));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7d26,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031c1fbc + 0x31c1e90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031c1fc0 + 0x31c1eac));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_031c1fc4 + 0x31c1ed4);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_031c1fcc + 0x31c1f30);
        goto LAB_031c1f84;
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
    puVar8 = *(undefined4 **)(_UNK_031c1fc8 + 0x31c1f84);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_031c1f84:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7d26,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

