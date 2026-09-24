
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2bd08(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_02f2bef0 + 0x2f2bd28);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2bef4 + 0x2f2bd3c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2bef8 + 0x2f2bd48));
    func_0x01438628(*(undefined4 *)(_UNK_02f2befc + 0x2f2bd54));
    func_0x01438628(*(undefined4 *)(_UNK_02f2bf00 + 0x2f2bd60));
    func_0x01438628(*(undefined4 *)(_UNK_02f2bf04 + 0x2f2bd6c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6d46,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f2bf08 + 0x2f2bddc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2bf0c + 0x2f2bdf8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_02f2bf10 + 0x2f2be20);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_02f2bf18 + 0x2f2be7c);
        goto LAB_02f2bed0;
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
    puVar8 = *(undefined4 **)(_UNK_02f2bf14 + 0x2f2bed0);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_02f2bed0:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x6d46,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

