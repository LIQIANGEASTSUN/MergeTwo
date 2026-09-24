
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03089590(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_03089778 + 0x30895b0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0308977c + 0x30895c4));
    func_0x01438628(*(undefined4 *)(_UNK_03089780 + 0x30895d0));
    func_0x01438628(*(undefined4 *)(_UNK_03089784 + 0x30895dc));
    func_0x01438628(*(undefined4 *)(_UNK_03089788 + 0x30895e8));
    func_0x01438628(*(undefined4 *)(_UNK_0308978c + 0x30895f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x75ad,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03089790 + 0x3089664) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03089794 + 0x3089680));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_03089798 + 0x30896a8);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_030897a0 + 0x3089704);
        goto LAB_03089758;
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
    puVar8 = *(undefined4 **)(_UNK_0308979c + 0x3089758);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_03089758:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x75ad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

