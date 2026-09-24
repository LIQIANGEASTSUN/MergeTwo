
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032afa2c(undefined4 param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_032afc84 + 0x32afa48);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032afc88 + 0x32afa5c));
    func_0x01438628(*(undefined4 *)(_UNK_032afc8c + 0x32afa68));
    func_0x01438628(*(undefined4 *)(_UNK_032afc90 + 0x32afa74));
    func_0x01438628(*(undefined4 *)(_UNK_032afc94 + 0x32afa80));
    func_0x01438628(*(undefined4 *)(_UNK_032afc98 + 0x32afa8c));
    func_0x01438628(*(undefined4 *)(_UNK_032afc9c + 0x32afa98));
    func_0x01438628(*(undefined4 *)(_UNK_032afca0 + 0x32afaa4));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x467,0);
  if (iVar1 == 0) {
    iVar1 = FUN_032a8ec4(param_1,0);
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_032afca4 + 0x32afb28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032afca8 + 0x32afb44));
      iVar1 = iVar2;
      if (iVar2 == 0) {
        iVar1 = func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        func_0x04cfe6f4(&uStack_28,iVar2,**(undefined4 **)(_UNK_032afcac + 0x32afb88));
        puVar4 = *(undefined4 **)(_UNK_032afcb0 + 0x32afb9c);
        do {
          iVar1 = func_0x04878f14(&uStack_28,*puVar4);
          iVar5 = iStack_1c;
          if (iVar1 == 0) {
            func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032afcb4 + 0x32afbf0));
            return 0;
          }
          if (iStack_1c == 0) {
            func_0x014388e4();
          }
        } while (*(int *)(iVar5 + 8) != param_2);
        func_0x04878f10(&uStack_28,**(undefined4 **)(_UNK_032afcc0 + 0x32afbd4));
      }
    }
  }
  else {
    iVar5 = func_0x029540a4(0x467,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x02878bd0(iVar5,param_1,param_2,0);
  }
  return iVar5;
}

