
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_033177c0(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_033179a8 + 0x33177e0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033179ac + 0x33177f4));
    func_0x01438628(*(undefined4 *)(_UNK_033179b0 + 0x3317800));
    func_0x01438628(*(undefined4 *)(_UNK_033179b4 + 0x331780c));
    func_0x01438628(*(undefined4 *)(_UNK_033179b8 + 0x3317818));
    func_0x01438628(*(undefined4 *)(_UNK_033179bc + 0x3317824));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x853e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_033179c0 + 0x3317894) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_033179c4 + 0x33178b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_033179c8 + 0x33178d8);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_033179d0 + 0x3317934);
        goto LAB_03317988;
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
    puVar8 = *(undefined4 **)(_UNK_033179cc + 0x3317988);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_03317988:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x853e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

