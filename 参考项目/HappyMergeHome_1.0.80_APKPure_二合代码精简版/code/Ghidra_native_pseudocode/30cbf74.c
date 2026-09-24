
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030dbf74(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_030dc15c + 0x30dbf94);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030dc160 + 0x30dbfa8));
    func_0x01438628(*(undefined4 *)(_UNK_030dc164 + 0x30dbfb4));
    func_0x01438628(*(undefined4 *)(_UNK_030dc168 + 0x30dbfc0));
    func_0x01438628(*(undefined4 *)(_UNK_030dc16c + 0x30dbfcc));
    func_0x01438628(*(undefined4 *)(_UNK_030dc170 + 0x30dbfd8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7729,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030dc174 + 0x30dc048) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030dc178 + 0x30dc064));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_030dc17c + 0x30dc08c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_030dc184 + 0x30dc0e8);
        goto LAB_030dc13c;
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
    puVar8 = *(undefined4 **)(_UNK_030dc180 + 0x30dc13c);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_030dc13c:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7729,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

