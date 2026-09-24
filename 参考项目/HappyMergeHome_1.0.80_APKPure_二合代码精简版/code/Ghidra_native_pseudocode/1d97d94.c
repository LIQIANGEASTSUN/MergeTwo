
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da7d94(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01da804c + 0x1da7dac);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da8050 + 0x1da7dc0));
    func_0x01438628(*(undefined4 *)(_UNK_01da8054 + 0x1da7dcc));
    func_0x01438628(*(undefined4 *)(_UNK_01da8058 + 0x1da7dd8));
    func_0x01438628(*(undefined4 *)(_UNK_01da805c + 0x1da7de4));
    func_0x01438628(*(undefined4 *)(_UNK_01da8060 + 0x1da7df0));
    func_0x01438628(*(undefined4 *)(_UNK_01da8064 + 0x1da7dfc));
    func_0x01438628(*(undefined4 *)(_UNK_01da8068 + 0x1da7e08));
    func_0x01438628(*(undefined4 *)(_UNK_01da806c + 0x1da7e14));
    func_0x01438628(*(undefined4 *)(_UNK_01da8070 + 0x1da7e20));
    func_0x01438628(*(undefined4 *)(_UNK_01da8074 + 0x1da7e2c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x3ec9,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da8078 + 0x1da7e9c));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01da807c + 0x1da7eb0));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_01da8080 + 0x1da7ed4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da8084 + 0x1da7ef0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d6cb8(iVar1,**(undefined4 **)(_UNK_01da8088 + 0x1da7f10));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01da808c + 0x1da7f3c));
      puVar5 = *(undefined4 **)(_UNK_01da8090 + 0x1da7f50);
      puVar7 = *(undefined4 **)(_UNK_01da8094 + 0x1da7f58);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01da8098 + 0x1da7fb0));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x3ec9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028d6544(iVar1,param_1,0);
  }
  return iVar1;
}

