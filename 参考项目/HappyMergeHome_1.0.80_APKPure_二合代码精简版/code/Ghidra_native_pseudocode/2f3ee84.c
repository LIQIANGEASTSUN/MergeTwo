
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f4ee84(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_02f4f06c + 0x2f4eea4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4f070 + 0x2f4eeb8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4f074 + 0x2f4eec4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4f078 + 0x2f4eed0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4f07c + 0x2f4eedc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4f080 + 0x2f4eee8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e13,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4f084 + 0x2f4ef58) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4f088 + 0x2f4ef74));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_02f4f08c + 0x2f4ef9c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_02f4f094 + 0x2f4eff8);
        goto LAB_02f4f04c;
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
    puVar8 = *(undefined4 **)(_UNK_02f4f090 + 0x2f4f04c);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_02f4f04c:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x6e13,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

