
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016f0730(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_016f09f0 + 0x16f0748);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f09f4 + 0x16f075c));
    func_0x01438628(*(undefined4 *)(_UNK_016f09f8 + 0x16f0768));
    func_0x01438628(*(undefined4 *)(_UNK_016f09fc + 0x16f0774));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a00 + 0x16f0780));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a04 + 0x16f078c));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a08 + 0x16f0798));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a0c + 0x16f07a4));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a10 + 0x16f07b0));
    func_0x01438628(*(undefined4 *)(_UNK_016f0a14 + 0x16f07bc));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x186f,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016f0a18 + 0x16f0830));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016f0a1c + 0x16f0844));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_016f0a20 + 0x16f0868) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f0a24 + 0x16f0884));
      iVar2 = FUN_016efab8(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016f0a28 + 0x16f08e0));
        puVar6 = *(undefined4 **)(_UNK_016f0a2c + 0x16f08f4);
        puVar7 = *(undefined4 **)(_UNK_016f0a30 + 0x16f08fc);
        while (iVar2 = func_0x015109ec(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x024f1078(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016f0a34 + 0x16f0954));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x186f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

