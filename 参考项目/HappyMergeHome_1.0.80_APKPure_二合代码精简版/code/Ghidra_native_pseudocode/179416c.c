
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a416c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017a4424 + 0x17a4184);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a4428 + 0x17a4198));
    func_0x01438628(*(undefined4 *)(_UNK_017a442c + 0x17a41a4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4430 + 0x17a41b0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4434 + 0x17a41bc));
    func_0x01438628(*(undefined4 *)(_UNK_017a4438 + 0x17a41c8));
    func_0x01438628(*(undefined4 *)(_UNK_017a443c + 0x17a41d4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4440 + 0x17a41e0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4444 + 0x17a41ec));
    func_0x01438628(*(undefined4 *)(_UNK_017a4448 + 0x17a41f8));
    func_0x01438628(*(undefined4 *)(_UNK_017a444c + 0x17a4204));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8e4b,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a4450 + 0x17a4274));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017a4454 + 0x17a4288));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017a4458 + 0x17a42ac) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a445c + 0x17a42c8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dbc78(iVar1,**(undefined4 **)(_UNK_017a4460 + 0x17a42e8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017a4464 + 0x17a4314));
      puVar5 = *(undefined4 **)(_UNK_017a4468 + 0x17a4328);
      puVar7 = *(undefined4 **)(_UNK_017a446c + 0x17a4330);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017a4470 + 0x17a4388));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8e4b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02925fa4(iVar1,param_1,0);
  }
  return iVar1;
}

