
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b807c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_016b8334 + 0x16b8094);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b8338 + 0x16b80a8));
    func_0x01438628(*(undefined4 *)(_UNK_016b833c + 0x16b80b4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8340 + 0x16b80c0));
    func_0x01438628(*(undefined4 *)(_UNK_016b8344 + 0x16b80cc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8348 + 0x16b80d8));
    func_0x01438628(*(undefined4 *)(_UNK_016b834c + 0x16b80e4));
    func_0x01438628(*(undefined4 *)(_UNK_016b8350 + 0x16b80f0));
    func_0x01438628(*(undefined4 *)(_UNK_016b8354 + 0x16b80fc));
    func_0x01438628(*(undefined4 *)(_UNK_016b8358 + 0x16b8108));
    func_0x01438628(*(undefined4 *)(_UNK_016b835c + 0x16b8114));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x88d5,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016b8360 + 0x16b8184));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_016b8364 + 0x16b8198));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_016b8368 + 0x16b81bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b836c + 0x16b81d8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f130c(iVar1,**(undefined4 **)(_UNK_016b8370 + 0x16b81f8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_016b8374 + 0x16b8224));
      puVar5 = *(undefined4 **)(_UNK_016b8378 + 0x16b8238);
      puVar7 = *(undefined4 **)(_UNK_016b837c + 0x16b8240);
      while (iVar2 = func_0x015109ec(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x024f1078(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_016b8380 + 0x16b8298));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x88d5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029230a0(iVar1,param_1,0);
  }
  return iVar1;
}

