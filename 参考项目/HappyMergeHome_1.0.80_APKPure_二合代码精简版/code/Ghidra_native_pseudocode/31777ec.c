
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031877ec(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_03187b00 + 0x318780c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03187b04 + 0x3187820));
    func_0x01438628(*(undefined4 *)(_UNK_03187b08 + 0x318782c));
    func_0x01438628(*(undefined4 *)(_UNK_03187b0c + 0x3187838));
    func_0x01438628(*(undefined4 *)(_UNK_03187b10 + 0x3187844));
    func_0x01438628(*(undefined4 *)(_UNK_03187b14 + 0x3187850));
    func_0x01438628(*(undefined4 *)(_UNK_03187b18 + 0x318785c));
    func_0x01438628(*(undefined4 *)(_UNK_03187b1c + 0x3187868));
    func_0x01438628(*(undefined4 *)(_UNK_03187b20 + 0x3187874));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7ba7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03187b24 + 0x31878e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031783f4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03187634(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_03187b28 + 0x3187928) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03187b2c + 0x3187948));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_03187b30 + 0x31879a4);
        puVar9 = *(undefined4 **)(_UNK_03187b34 + 0x31879ac);
        do {
          if (*(int *)(**(int **)(_UNK_03187b38 + 0x31879b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar3 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_03187b3c + 0x3187a20) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar4 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x53) = 1;
            iVar5 = func_0x04cfd760(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03187b44(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_03187b40 + 0x3187ae4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7ba7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

