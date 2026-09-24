
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017dc730(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_017dc988 + 0x17dc74c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017dc98c + 0x17dc760));
    func_0x01438628(*(undefined4 *)(_UNK_017dc990 + 0x17dc76c));
    func_0x01438628(*(undefined4 *)(_UNK_017dc994 + 0x17dc778));
    func_0x01438628(*(undefined4 *)(_UNK_017dc998 + 0x17dc784));
    func_0x01438628(*(undefined4 *)(_UNK_017dc99c + 0x17dc790));
    func_0x01438628(*(undefined4 *)(_UNK_017dc9a0 + 0x17dc79c));
    func_0x01438628(*(undefined4 *)(_UNK_017dc9a4 + 0x17dc7a8));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x45d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_017d5bc8(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_017dc9a8 + 0x17dc82c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017dc9ac + 0x17dc848));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x0152da0c(&uStack_28,iVar2,**(undefined4 **)(_UNK_017dc9b0 + 0x17dc88c));
        puVar4 = *(undefined4 **)(_UNK_017dc9b4 + 0x17dc8a0);
        do {
          iVar1 = func_0x015109ec(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar1 == 0) {
            func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017dc9b8 + 0x17dc8f4));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != param_2);
        func_0x0152da2c(&uStack_28,**(undefined4 **)(_UNK_017dc9c4 + 0x17dc8d8));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x45d,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02878ab0(iVar5,param_1,param_2,0);
  }
  return iVar5;
}

