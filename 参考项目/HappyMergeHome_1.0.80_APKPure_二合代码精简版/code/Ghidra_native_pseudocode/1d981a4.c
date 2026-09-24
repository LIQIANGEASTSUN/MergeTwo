
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da81a4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01da8464 + 0x1da81bc);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da8468 + 0x1da81d0));
    func_0x01438628(*(undefined4 *)(_UNK_01da846c + 0x1da81dc));
    func_0x01438628(*(undefined4 *)(_UNK_01da8470 + 0x1da81e8));
    func_0x01438628(*(undefined4 *)(_UNK_01da8474 + 0x1da81f4));
    func_0x01438628(*(undefined4 *)(_UNK_01da8478 + 0x1da8200));
    func_0x01438628(*(undefined4 *)(_UNK_01da847c + 0x1da820c));
    func_0x01438628(*(undefined4 *)(_UNK_01da8480 + 0x1da8218));
    func_0x01438628(*(undefined4 *)(_UNK_01da8484 + 0x1da8224));
    func_0x01438628(*(undefined4 *)(_UNK_01da8488 + 0x1da8230));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1008,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01da848c + 0x1da82a4));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_01da8490 + 0x1da82b8));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_01da8494 + 0x1da82dc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da8498 + 0x1da82f8));
      iVar2 = FUN_01da7580(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_01da849c + 0x1da8354));
        puVar6 = *(undefined4 **)(_UNK_01da84a0 + 0x1da8368);
        puVar7 = *(undefined4 **)(_UNK_01da84a4 + 0x1da8370);
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
        func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01da84a8 + 0x1da83c8));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1008,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

