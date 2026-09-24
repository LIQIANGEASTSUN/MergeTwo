
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be25e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02be2818 + 0x2be2604);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be281c + 0x2be261c));
    func_0x01438628(*(undefined4 *)(_UNK_02be2820 + 0x2be2628));
    func_0x01438628(*(undefined4 *)(_UNK_02be2824 + 0x2be2634));
    func_0x01438628(*(undefined4 *)(_UNK_02be2828 + 0x2be2640));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d11,0);
  if (iVar2 == 0) {
    iStack_24 = 0;
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046c26fc(iVar2,param_2,**(undefined4 **)(_UNK_02be282c + 0x2be26dc));
    if (iVar2 == 0) {
      iStack_24 = 1;
      iVar2 = FUN_02bad050(param_1,param_4);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x03b70cd0(iVar2,param_2,1,**(undefined4 **)(_UNK_02be2838 + 0x2be27d8));
    }
    else {
      iVar2 = FUN_02bad050(param_1,param_4);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x046c3f38(iVar2,param_2,&iStack_24,**(undefined4 **)(_UNK_02be2830 + 0x2be272c));
      iStack_24 = iStack_24 + 1;
      iVar2 = FUN_02bad050(param_1,param_4);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = iStack_24;
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x03b70fe4(iVar2,param_2,iVar1,**(undefined4 **)(_UNK_02be2834 + 0x2be2784));
    }
    iVar2 = FUN_02bad050(param_1,param_4);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    FUN_026f60e0(iVar2,*(int *)(iVar2 + 0x24) + 1,0);
  }
  else {
    iVar2 = func_0x029540a4(0x5d11,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}

