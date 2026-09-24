
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a447c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_017a4734 + 0x17a4494);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a4738 + 0x17a44a8));
    func_0x01438628(*(undefined4 *)(_UNK_017a473c + 0x17a44b4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4740 + 0x17a44c0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4744 + 0x17a44cc));
    func_0x01438628(*(undefined4 *)(_UNK_017a4748 + 0x17a44d8));
    func_0x01438628(*(undefined4 *)(_UNK_017a474c + 0x17a44e4));
    func_0x01438628(*(undefined4 *)(_UNK_017a4750 + 0x17a44f0));
    func_0x01438628(*(undefined4 *)(_UNK_017a4754 + 0x17a44fc));
    func_0x01438628(*(undefined4 *)(_UNK_017a4758 + 0x17a4508));
    func_0x01438628(*(undefined4 *)(_UNK_017a475c + 0x17a4514));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8e3f,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x44);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a4760 + 0x17a4584));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_017a4764 + 0x17a4598));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_017a4768 + 0x17a45bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a476c + 0x17a45d8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036dbc78(iVar1,**(undefined4 **)(_UNK_017a4770 + 0x17a45f8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_017a4774 + 0x17a4624));
      puVar5 = *(undefined4 **)(_UNK_017a4778 + 0x17a4638);
      puVar7 = *(undefined4 **)(_UNK_017a477c + 0x17a4640);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_017a4780 + 0x17a4698));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8e3f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02925e9c(iVar1,param_1,0);
  }
  return iVar1;
}

