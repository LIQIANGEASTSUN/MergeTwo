
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018c4578(int param_1)

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
  
  pcVar3 = (char *)(_UNK_018c4830 + 0x18c4590);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c4834 + 0x18c45a4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4838 + 0x18c45b0));
    func_0x01438628(*(undefined4 *)(_UNK_018c483c + 0x18c45bc));
    func_0x01438628(*(undefined4 *)(_UNK_018c4840 + 0x18c45c8));
    func_0x01438628(*(undefined4 *)(_UNK_018c4844 + 0x18c45d4));
    func_0x01438628(*(undefined4 *)(_UNK_018c4848 + 0x18c45e0));
    func_0x01438628(*(undefined4 *)(_UNK_018c484c + 0x18c45ec));
    func_0x01438628(*(undefined4 *)(_UNK_018c4850 + 0x18c45f8));
    func_0x01438628(*(undefined4 *)(_UNK_018c4854 + 0x18c4604));
    func_0x01438628(*(undefined4 *)(_UNK_018c4858 + 0x18c4610));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x952c,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x3c);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c485c + 0x18c4680));
      func_0x024f063c(iVar1,**(undefined4 **)(_UNK_018c4860 + 0x18c4694));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_018c4864 + 0x18c46b8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c4868 + 0x18c46d4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036d7280(iVar1,**(undefined4 **)(_UNK_018c486c + 0x18c46f4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_30,iVar1,**(undefined4 **)(_UNK_018c4870 + 0x18c4720));
      puVar5 = *(undefined4 **)(_UNK_018c4874 + 0x18c4734);
      puVar7 = *(undefined4 **)(_UNK_018c4878 + 0x18c473c);
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
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_018c487c + 0x18c4794));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x952c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02929a48(iVar1,param_1,0);
  }
  return iVar1;
}

