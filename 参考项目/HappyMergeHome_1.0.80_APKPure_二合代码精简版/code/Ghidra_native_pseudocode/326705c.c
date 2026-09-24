
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0327705c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_03277314 + 0x3277074);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03277318 + 0x3277088));
    func_0x01438628(*(undefined4 *)(_UNK_0327731c + 0x3277094));
    func_0x01438628(*(undefined4 *)(_UNK_03277320 + 0x32770a0));
    func_0x01438628(*(undefined4 *)(_UNK_03277324 + 0x32770ac));
    func_0x01438628(*(undefined4 *)(_UNK_03277328 + 0x32770b8));
    func_0x01438628(*(undefined4 *)(_UNK_0327732c + 0x32770c4));
    func_0x01438628(*(undefined4 *)(_UNK_03277330 + 0x32770d0));
    func_0x01438628(*(undefined4 *)(_UNK_03277334 + 0x32770dc));
    func_0x01438628(*(undefined4 *)(_UNK_03277338 + 0x32770e8));
    func_0x01438628(*(undefined4 *)(_UNK_0327733c + 0x32770f4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x811a,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03277340 + 0x3277164));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03277344 + 0x3277178));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03277348 + 0x327719c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0327734c + 0x32771b8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e2b78(iVar1,**(undefined4 **)(_UNK_03277350 + 0x32771d8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03277354 + 0x3277204));
      puVar5 = *(undefined4 **)(_UNK_03277358 + 0x3277218);
      puVar7 = *(undefined4 **)(_UNK_0327735c + 0x3277220);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03277360 + 0x3277278));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x811a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291f204(iVar1,param_1,0);
  }
  return iVar1;
}

